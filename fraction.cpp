#include "fraction.h"

Fraction::Fraction() : numerator(0), denominator(1) {
}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
}

void Fraction::input() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    // Валідація для уникнення ділення на 0
    if (denominator == 0) {
        std::cerr << "Denominator cannot be zero. Setting denominator to 1.\n";
        denominator = 1;
    }
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

Fraction Fraction::add(const Fraction& other) const {
    int commonDenominator = findCommonDenominator(denominator, other.denominator);
    int resultNumerator = numerator * (commonDenominator / denominator) +
        other.numerator * (commonDenominator / other.denominator);

    return Fraction(resultNumerator, commonDenominator);
}

Fraction Fraction::subtract(const Fraction& other) const {
    int commonDenominator = findCommonDenominator(denominator, other.denominator);
    int resultNumerator = numerator * (commonDenominator / denominator) -
        other.numerator * (commonDenominator / other.denominator);

    return Fraction(resultNumerator, commonDenominator);
}

Fraction Fraction::multiply(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::divide(const Fraction& other) const {
    // Перевертаємо другий дріб і використовуємо множення
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

int Fraction::findCommonDenominator(int denom1, int denom2) {
    int commonDenominator = 1;
    while (commonDenominator % denom1 != 0 || commonDenominator % denom2 != 0) {
        commonDenominator++;
    }
    return commonDenominator;
}