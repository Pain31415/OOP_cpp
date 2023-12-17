#include "point.h"

int main() {
    // ��������� ��'���� ����� Point
    Point point;

    // �������� ���������
    point.input();

    // ��������� ��������� � �������
    std::cout << "Point Coordinates: ";
    point.display();

    // ���������� ��������� � ����
    point.saveToFile("point_data.txt");

    // ������������ ��������� � �����
    Point loadedPoint;
    loadedPoint.loadFromFile("point_data.txt");

    // ��������� ������������ ��������� � �������
    std::cout << "\nLoaded Point Coordinates: ";
    loadedPoint.display();

    return 0;
}