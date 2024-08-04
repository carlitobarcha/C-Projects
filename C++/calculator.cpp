#include <iostream>

int main() {
    double num1, num2;
    char operation;

    // Input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Perform calculation based on the selected operation
    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "error: Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
            std::cout << "Error: Invalid operation." << std::endl;
            return 1; // Exit with an error code
    }

    // Output the result
    std::cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << result << std::endl;

    return 0;
}

