#include <iostream>
#include <string>

int main() {
    std::string name = "Dereck";
    //this is an implicit cast 
    int number = 5;
    double decimal = number;

    double weight = 54.6;
    int roundedWeight = (int) weight; //becomes 54
    double weightOne = 9.7;
    int number = static_cast<int>(decimal); // becomes 9
    return 0;
}