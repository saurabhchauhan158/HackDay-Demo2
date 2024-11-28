#include <iostream>

class Calculator {
public:
    // Adds two integers
    int add(int a, int b) {
        return a + b;
    }

    // Subtracts the second integer from the first
    int subtract(int a, int b) {
        return a - b;
    }

    // Multiplies two integers
    int multiply(int a, int b) {
        return a * b;
    }

    // Divides the first integer by the second
    // Returns 0 if the second integer is 0
    int divide(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: Division by zero." << std::endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    // Demonstrate calculator operations
    int a = 10, b = 5;
    std::cout << "Add: " << a << " + " << b << " = " << calc.add(a, b) << std::endl;
    std::cout << "Subtract: " << a << " - " << b << " = " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiply: " << a << " * " << b << " = " << calc.multiply(a, b) << std::endl;
    std::cout << "Divide: " << a << " / " << b << " = " << calc.divide(a, b) << std::endl;

    // Demonstrate division by zero
    std::cout << "Divide: " << a << " / 0 = " << calc.divide(a, 0) << std::endl;

    return 0;
}
