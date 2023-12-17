#include "contact.h"
#include <vector>

class Phonebook {
private:
    std::vector<Contact*> contacts;
    std::string projectFilePath; // Додавання змінної для збереження шляху до файлу проекту

public:
    Phonebook();
    ~Phonebook();

    void setProjectFilePath(const std::string& path); // Додавання функції для встановлення шляху
    void addContact();
    void removeContact();
    void searchByName();
    void displayAllContacts();
    void saveToFile(const std::string& fileName) const;
    void loadFromFile(const std::string& fileName);
    void saveToProjectFile() const; // Збереження до файлу проекту
    void loadFromProjectFile(); // Завантаження з файлу проекту
};