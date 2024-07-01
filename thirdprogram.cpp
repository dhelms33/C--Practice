#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

// Function to check if a number is prime
bool isprime(int n)
{
    if (n <= 1)  // Numbers less than or equal to 1 are not prime
        return false;
    if (n == 2)  // 2 is the only even prime number
        return true;
    
    // Loop to check for divisors from 2 to n/2
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)  // If n is divisible by i, n is not prime
            return false;
    }
    return true;  // If no divisors are found, n is prime
}

int main()
{
    int number;  // Variable to store the user input
    cout << "Enter a number to see if it is prime: ";  // Prompt the user for input
    cin >> number;  // Read the input number
    
    // Output whether the number is prime or not
    if (isprime(number))
        cout << number << " is a prime number" << endl;
    else
        cout << number << " is not a prime number" << endl;

    return 0;  // Return 0 to indicate successful completion
}
