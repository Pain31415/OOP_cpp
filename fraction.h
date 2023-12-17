#include <iostream>

class Fraction {
private:
    int numerator;   // Чисельник
    int denominator; // Знаменник

public:
    // Конструктор за замовчуванням
    Fraction();

    // Конструктор з параметрами
    Fraction(int num, int denom);

    // Функція для введення даних
    void input();

    // Функція для виведення даних
    void display() const;

    // Арифметичні операції
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    // Загальний знаменник для додавання та віднімання
    static int findCommonDenominator(int denom1, int denom2);
};