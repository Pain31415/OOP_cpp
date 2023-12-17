#include "phonebook.h"
#include <iostream>

int main() {
    Phonebook phonebook;

    int choice;
    do {
        std::cout << "\nPhonebook Menu:\n";
        std::cout << "1. Add Contact\n";
        std::cout << "2. Remove Contact\n";
        std::cout << "3. Search by Name\n";
        std::cout << "4. Display All Contacts\n";
        std::cout << "5. Save to File\n";
        std::cout << "6. Load from File\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            phonebook.addContact();
            break;
        case 2:
            phonebook.removeContact();
            break;
        case 3:
            phonebook.searchByName();
            break;
        case 4:
            phonebook.displayAllContacts();
            break;
        case 5: {
            std::string fileName;
            std::cout << "Enter the file name to save: ";
            std::cin >> fileName;
            phonebook.saveToFile(fileName);
            break;
        }
        case 6: {
            std::string fileName;
            std::cout << "Enter the file name to load: ";
            std::cin >> fileName;
            phonebook.loadFromFile(fileName);
            break;
        }
        case 7:
            std::cout << "Exiting the Phonebook.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);

    return 0;
}