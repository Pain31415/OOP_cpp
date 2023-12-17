#include "point.h"

int main() {
    // Створення об'єкта класу Point
    Point point;

    // Введення координат
    point.input();

    // Виведення координат в консоль
    std::cout << "Point Coordinates: ";
    point.display();

    // Збереження координат в файл
    point.saveToFile("point_data.txt");

    // Завантаження координат з файлу
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // Виведення завантажених координат в консоль
    std::cout << "\nLoaded Point Coordinates: ";
    loadedPoint.display();

    return 0;
}