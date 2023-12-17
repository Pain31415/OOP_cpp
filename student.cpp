#include "student.h"

using namespace std;

Student::Student(string name, string birth, string contact,
    string studentCity, string studentCountry,
    string uniName, string uniCity, string uniCountry,
    string group)
    : fullName(name), birthDate(birth), contactNumber(contact),
    city(studentCity), country(studentCountry), universityName(uniName),
    universityCity(uniCity), universityCountry(uniCountry), groupNumber(group) {
}

void Student::displayStudentInfo(ostream& output) const {
    output << "Full Name: " << fullName << endl;
    output << "Birth Date: " << birthDate << endl;
    output << "Contact Number: " << contactNumber << endl;
    output << "City: " << city << ", Country: " << country << endl;
    output << "University: " << universityName << endl;
    output << "University Location: " << universityCity << ", " << universityCountry << endl;
    output << "Group Number: " << groupNumber << endl;
}

string Student::getFullName() const {
    return fullName;
}

void Student::setFullName(string name) {
    fullName = name;
}

string Student::getBirthDate() const {
    return birthDate;
}

void Student::setBirthDate(string birth) {
    birthDate = birth;
}

string Student::getContactNumber() const {
    return contactNumber;
}

void Student::setContactNumber(string contact) {
    contactNumber = contact;
}

string Student::getCity() const {
    return city;
}

void Student::setCity(string studentCity) {
    city = studentCity;
}

string Student::getCountry() const {
    return country;
}

void Student::setCountry(string studentCountry) {
    country = studentCountry;
}

string Student::getUniversityName() const {
    return universityName;
}

void Student::setUniversityName(string uniName) {
    universityName = uniName;
}

string Student::getUniversityCity() const {
    return universityCity;
}

void Student::setUniversityCity(string uniCity) {
    universityCity = uniCity;
}

string Student::getUniversityCountry() const {
    return universityCountry;
}

void Student::setUniversityCountry(string uniCountry) {
    universityCountry = uniCountry;
}

string Student::getGroupNumber() const {
    return groupNumber;
}

void Student::setGroupNumber(string group) {
    groupNumber = group;
}