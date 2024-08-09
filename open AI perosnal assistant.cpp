#include <iostream>
#include <string>
#include <cmath>

// Weather Checker
void checkWeather() {
    // Simulated weather check
    std::cout << "Weather: Sunny" << std::endl;
}

// Calculator
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        std::cout << "Error: Division by zero" << std::endl;
        return 0;
    }
    return a / b;
}

// Financial Manager
class FinancialManager {
public:
    double balance = 0;

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds" << std::endl;
        }
    }
};

int main() {
    std::string command;

    FinancialManager manager;

    while (true) {
        std::cout << "Enter a command (weather, calculator, finance, exit): ";
        std::cin >> command;

        if (command == "weather") {
            checkWeather();
        } else if (command == "calculator") {
            double a, b, result;
            std::string operation;

            std::cout << "Enter the first number: ";
            std::cin >> a;
            std::cout << "Enter the operation (+, -, *, /): ";
            std::cin >> operation;
            std::cout << "Enter the second number: ";
            std::cin >> b;

            if (operation == "+") {
                result = add(a, b);
            } else if (operation == "-") {
                result = subtract(a, b);
            } else if (operation == "*") {
                result = multiply(a, b);
            } else if (operation == "/") {
                result = divide(a, b);
            } else {
                std::cout << "Invalid operation" << std::endl;
                continue;
            }

            std::cout << "Result: " << result << std::endl;
        } else if (command == "finance") {
            double amount;
            std::string action;

            std::cout << "Enter the action (deposit, withdraw): ";
            std::cin >> action;
            std::cout << "Enter the amount: ";
            std::cin >> amount;

            if (action == "deposit") {
                manager.deposit(amount);
            } else if (action == "withdraw") {
                manager.withdraw(amount);
            } else {
                std::cout << "Invalid action" << std::endl;
            }

            std::cout << "Current balance: " << manager.balance << std::endl;
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command" << std::endl;
        }
    }

    return 0;
}

