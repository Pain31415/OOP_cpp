#include <iostream>
#include <fstream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // Конструктор за замовчуванням
    Point();

    // Конструктор з параметрами
    Point(double x, double y, double z);

    // Функція для введення даних
    void input();

    // Функція для виведення даних
    void display() const;

    // Аксесори для доступу до змінних-членів
    double getX() const;
    void setX(double newX);

    double getY() const;
    void setY(double newY);

    double getZ() const;
    void setZ(double newZ);

    // Збереження в файл
    void saveToFile(const std::string& fileName) const;

    // Завантаження з файлу
    void loadFromFile(const std::string& fileName);
};