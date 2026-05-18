#include <iostream>

int Multiply(int a, int b) {
    return a * b;
}

void MultiplyAndLog(int a, int b) {
    int result = Multiply(int a, int b);
    std::cout << result << std::endl;

}

int main() {
    int result = Multiply(3,2);
    MultiplyAndLog(90,45);

    std::cout << "Multiplication result " << result std::endl;
    std::cin.get();
}