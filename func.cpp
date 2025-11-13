#include <iostream>

int factorial(int n) {
    // Base case: Factorial of 0 is 1
    if (n == 0) {
        return 1;
    }
    // Recursive step: n * factorial(n-1)
    return n * factorial(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl;
    }

    return 0;
}
// First Change

// Second Change

// Third Change
