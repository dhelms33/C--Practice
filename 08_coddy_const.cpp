#include <iostream>
#include <string>

int main() {
    const int MAX_VALUE = 456;
    const double PI = 3.14;
    const double studentNumber;
    std::string name = "Dereck";
    std::cout << "This is a constant, it cannot be changed" << MAX_VALUE << endl;
    std::cout << "This is a constant for PI, " << PI << endl;
    std::cout << "This is a variable for studentNumber " << studentNumber << endl;
    std::cout << "This is a variable for name " << name << endl;
    return 0;
}