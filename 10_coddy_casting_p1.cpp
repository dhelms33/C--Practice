#include <iostream>

int main() {
    // Declare and initialize variables
    double price = 99.99;
    int intPriceV2 = static_cast<double>(price);
    int intPrice = (double) price; // Explicit casting from double to int
    
    
    // Output the values
    std::cout << "Price: " << price << std::endl;
    std::cout << "Int Price: " << intPrice << std::endl;
    
    return 0;
}