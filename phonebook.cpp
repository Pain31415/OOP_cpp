#include "phonebook.h"
#include <iostream>
#include <fstream>
#include <algorithm>

Phonebook::Phonebook() {}

Phonebook::~Phonebook() {
    for (Contact* contact : contacts) {
        delete contact;
    }
}

void Phonebook::setProjectFilePath(const std::string& path) {
    projectFilePath = path;
}

void Phonebook::addContact() {
    Contact* newContact = new Contact();
    newContact->input();
    contacts.push_back(newContact);
}

void Phonebook::removeContact() {
    // Реалізуйте видалення абонента за іменем
    std::string nameToRemove;
    std::cout << "Enter the name of the contact to remove: ";
    std::cin.ignore();
    std::getline(std::cin, nameToRemove);

    auto it = std::remove_if(contacts.begin(), contacts.end(),
        [nameToRemove](const Contact* contact) {
            return contact->getName() == nameToRemove;
        });

    contacts.erase(it, contacts.end());
}

void Phonebook::searchByName() {
    // Реалізуйте пошук абонента за іменем
    std::string nameToSearch;
    std::cout << "Enter the name of the contact to search: ";
    std::cin.ignore();
    std::getline(std::cin, nameToSearch);

    auto it = std::find_if(contacts.begin(), contacts.end(),
        [nameToSearch](const Contact* contact) {
            return contact->getName() == nameToSearch;
        });

    if (it != contacts.end()) {
        (*it)->display();
    }
    else {
        std::cout << "Contact not found.\n";
    }
}

void Phonebook::displayAllContacts() {
    for (const Contact* contact : contacts) {
        contact->display();
        std::cout << "-------------------\n";
    }
}

void Phonebook::saveToFile(const std::string& fileName) const {
    std::ofstream outFile(fileName);
    if (outFile.is_open()) {
        for (const Contact* contact : contacts) {
            contact->saveToFile(outFile);
        }
        outFile.close();
        std::cout << "Contacts saved to " << fileName << std::endl;
    }
    else {
        std::cerr << "Unable to open the file for saving.\n";
    }
}

void Phonebook::loadFromFile(const std::string& fileName) {
    std::ifstream inFile(fileName);
    if (inFile.is_open()) {
        // Очистити поточні контакти перед завантаженням нових
        for (Contact* contact : contacts) {
            delete contact;
        }
        contacts.clear();

        // Завантаження контактів з файлу
        while (!inFile.eof()) {
            Contact* newContact = new Contact();
            newContact->loadFromFile(inFile);
            contacts.push_back(newContact);
        }

        inFile.close();
        std::cout << "Contacts loaded from " << fileName << std::endl;
    }
    else {
        std::cerr << "Unable to open the file for loading.\n";
    }
}

void Phonebook::saveToProjectFile() const {
    saveToFile(projectFilePath); // Викликати saveToFile з ім'ям файлу проекту
}

void Phonebook::loadFromProjectFile() {
    loadFromFile(projectFilePath); // Викликати loadFromFile з ім'ям файлу проекту
}