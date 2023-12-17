#include "contact.h"
#include <vector>

class Phonebook {
private:
    std::vector<Contact*> contacts;
    std::string projectFilePath; // ��������� ����� ��� ���������� ����� �� ����� �������

public:
    Phonebook();
    ~Phonebook();

    void setProjectFilePath(const std::string& path); // ��������� ������� ��� ������������ �����
    void addContact();
    void removeContact();
    void searchByName();
    void displayAllContacts();
    void saveToFile(const std::string& fileName) const;
    void loadFromFile(const std::string& fileName);
    void saveToProjectFile() const; // ���������� �� ����� �������
    void loadFromProjectFile(); // ������������ � ����� �������
};