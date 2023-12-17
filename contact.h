#include <string>
#include <iostream>
#include <fstream>

class Contact {
private:
    std::string name;
    std::string homePhone;
    std::string workPhone;
    std::string mobilePhone;
    std::string additionalInfo;

public:
    Contact();
    ~Contact();

    void input();
    void display() const;
    void saveToFile(std::ofstream& outFile) const;
    void loadFromFile(std::ifstream& inFile);

    std::string getName() const;
};