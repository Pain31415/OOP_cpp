#include "point.h"

Point::Point() : x(0.0), y(0.0), z(0.0) {
}

Point::Point(double x, double y, double z) : x(x), y(y), z(z) {
}

void Point::input() {
    std::cout << "Enter x-coordinate: ";
    std::cin >> x;

    std::cout << "Enter y-coordinate: ";
    std::cin >> y;

    std::cout << "Enter z-coordinate: ";
    std::cin >> z;
}

void Point::display() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")\n";
}

double Point::getX() const {
    return x;
}

void Point::setX(double newX) {
    x = newX;
}

double Point::getY() const {
    return y;
}

void Point::setY(double newY) {
    y = newY;
}

double Point::getZ() const {
    return z;
}

void Point::setZ(double newZ) {
    z = newZ;
}

void Point::saveToFile(const std::string& fileName) const {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        outFile << x << " " << y << " " << z << "\n";
        outFile.close();
    }
    else {
        std::cerr << "Unable to open the file for saving.\n";
    }
}

void Point::loadFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        inFile >> x >> y >> z;
        inFile.close();
    }
    else {
        std::cerr << "Unable to open the file for loading.\n";
    }
}