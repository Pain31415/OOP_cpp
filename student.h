#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string fullName;
    string birthDate;
    string contactNumber;
    string city;
    string country;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    // Конструктор класу
    Student(string name, string birth, string contact,
        string studentCity, string studentCountry,
        string uniName, string uniCity, string uniCountry,
        string group);

    // Функція для виведення даних
    void displayStudentInfo(ostream& output) const;

    string getFullName() const;
    void setFullName(string name);

    string getBirthDate() const;
    void setBirthDate(string birth);

    string getContactNumber() const;
    void setContactNumber(string contact);

    string getCity() const;
    void setCity(string studentCity);

    string getCountry() const;
    void setCountry(string studentCountry);

    string getUniversityName() const;
    void setUniversityName(string uniName);

    string getUniversityCity() const;
    void setUniversityCity(string uniCity);

    string getUniversityCountry() const;
    void setUniversityCountry(string uniCountry);

    string getGroupNumber() const;
    void setGroupNumber(string group);
};