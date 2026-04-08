#include <iostream>
#include <string>

int main() {
    std::string name = "Dereck";
    //this is an implicit cast 
    int number = 5;
    double decimal = number;

    double weight = 54.6;
    int roundedWeight = (int) weight; //becomes 54
    return 0;
}