#include "contact.h"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::input() {
    std::cout << "Enter name: ";
    std::getline(std::cin, name);

    std::cout << "Enter home phone: ";
    std::getline(std::cin, homePhone);

    std::cout << "Enter work phone: ";
    std::getline(std::cin, workPhone);

    std::cout << "Enter mobile phone: ";
    std::getline(std::cin, mobilePhone);

    std::cout << "Enter additional info: ";
    std::getline(std::cin, additionalInfo);
}

void Contact::display() const {
    std::cout << "Name: " << name << "\n";
    std::cout << "Home Phone: " << homePhone << "\n";
    std::cout << "Work Phone: " << workPhone << "\n";
    std::cout << "Mobile Phone: " << mobilePhone << "\n";
    std::cout << "Additional Info: " << additionalInfo << "\n";
}

void Contact::saveToFile(std::ofstream& outFile) const {
    outFile << name << "\n";
    outFile << homePhone << "\n";
    outFile << workPhone << "\n";
    outFile << mobilePhone << "\n";
    outFile << additionalInfo << "\n";
}

void Contact::loadFromFile(std::ifstream& inFile) {
    std::getline(inFile, name);
    std::getline(inFile, homePhone);
    std::getline(inFile, workPhone);
    std::getline(inFile, mobilePhone);
    std::getline(inFile, additionalInfo);
}

std::string Contact::getName() const {
    return name;
}