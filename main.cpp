#include "student.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // ��������� ��'���� ����� Student
    Student student("John Doe", "01-01-2000", "+123456789", "City1", "Country1",
        "University XYZ", "City2", "Country2", "Group123");

    // ��������� ���������� ��� �������� � �������
    cout << "Original Information:\n";
    student.displayStudentInfo(cout);

    // ���� �������� ������ � ����
    student.setFullName("Jane Doe");
    student.setBirthDate("02-02-2002");
    student.setContactNumber("+987654321");
    student.setCity("NewCity");
    student.setCountry("NewCountry");
    student.setUniversityName("New University");
    student.setUniversityCity("NewUniCity");
    student.setUniversityCountry("NewUniCountry");
    student.setGroupNumber("NewGroup");

    // ��������� �������� ���������� � �������
    cout << "\nUpdated Information:\n";
    student.displayStudentInfo(cout);

    // ����� ���������� � ��������� ����
    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "Original Information:\n";
        outputFile << "----------------------\n";
        student.displayStudentInfo(outputFile);

        outputFile << "\n\nUpdated Information:\n";
        outputFile << "----------------------\n";
        student.displayStudentInfo(outputFile);

        cout << "Information has been written to 'output.txt' in the project directory.\n";
        outputFile.close();
    }
    else {
        cerr << "Unable to open the output file.\n";
    }

    return 0;
}