#include <iostream>
#include <fstream>

class Point {
private:
    double x;
    double y;
    double z;

public:
    // ����������� �� �������������
    Point();

    // ����������� � �����������
    Point(double x, double y, double z);

    // ������� ��� �������� �����
    void input();

    // ������� ��� ��������� �����
    void display() const;

    // �������� ��� ������� �� ������-�����
    double getX() const;
    void setX(double newX);

    double getY() const;
    void setY(double newY);

    double getZ() const;
    void setZ(double newZ);

    // ���������� � ����
    void saveToFile(const std::string& fileName) const;

    // ������������ � �����
    void loadFromFile(const std::string& fileName);
};