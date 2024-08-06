#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

// Calculator Class
class Calculator {
public:
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
            cout << "Error: Division by zero!" << endl;
            return 0; // or handle error in a better way
        }
        return a / b;
    }
};

// Finance Class
class Finance {
private:
    double salary;

public:
    Finance(double initialSalary) : salary(initialSalary) {}

    double getSalary() {
        return salary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    double calculateTotal(double amount) {
        return salary + amount;
    }

    double remainingBudget(double amount) {
        return salary - amount;
    }

    double calculateZakat() {
        return 0.025 * salary;
    }
};

// Weather Class
class Weather {
public:
    void getWeatherData(int temperatures[], int numDays) {
        cout << "Enter the temperatures for the next " << numDays << " days:" << endl;
        for (int i = 0; i < numDays; i++) {
            cout << "Day " << (i + 1) << ": ";
            cin >> temperatures[i];
        }
    }

    double calculateAverage(int temperatures[], int numDays) {
        int sum = 0;
        for (int i = 0; i < numDays; i++) {
            sum += temperatures[i];
        }
        return static_cast<double>(sum) / numDays;
    }

    int findMaxTemperature(int temperatures[], int numDays) {
        int maxTemp = temperatures[0];
        for (int i = 1; i < numDays; i++) {
            if (temperatures[i] > maxTemp) {
                maxTemp = temperatures[i];
            }
        }
        return maxTemp;
    }

    int findMinTemperature(int temperatures[], int numDays) {
        int minTemp = temperatures[0];
        for (int i = 1; i < numDays; i++) {
            if (temperatures[i] < minTemp) {
                minTemp = temperatures[i];
            }
        }
        return minTemp;
    }
};

// Bookkeeping Class
class Bookkeeping {
    // Your bookkeeping class implementation
};

// NoteTaking Class
class NoteTaking {
    // Your note-taking class implementation
};

// Contacts Class
class Contacts {
    // Your contacts class implementation
};

// Main program
int main() {
    Calculator calculator;
    Finance finance(0); // Initial salary set to 0, change as required
    Weather weather;
    Bookkeeping bookkeeping;
    NoteTaking noteTaking;
    Contacts contacts;

    int choice;
    string name;

    cout << "Enter Name Please" << endl;
    cin >> name;

    do {
        cout << "Hello " << name << " How Can I Help You Today" << endl;
        cout << "\n1. Calculator\t\t2. Finance\t\t3. Weather\n"
             << "4. Book Keeping\t\t5. Note App\t\t6. Contact App\n"
             << "0. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Calculator option
                double num1, num2;
                char op;
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Enter operator (+, -, *, /): ";
                cin >> op;
                switch (op) {
                    case '+':
                        cout << "Result: " << calculator.add(num1, num2) << endl;
                        break;
                    case '-':
                        cout << "Result: " << calculator.subtract(num1, num2) << endl;
                        break;
                    case '*':
                        cout << "Result: " << calculator.multiply(num1, num2) << endl;
                        break;
                    case '/':
                        cout << "Result: " << calculator.divide(num1, num2) << endl;
                        break;
                    default:
                        cout << "Invalid operator" << endl;
                }
                break;
            case 2:
                // Finance option
                // Use finance object to manage finances
                break;
            case 3:
                // Weather option
                // Use weather object to get weather data
                break;
            case 4:
                // Bookkeeping option
                // Use bookkeeping object to manage books
                break;
            case 5:
                // Note app option
                // Use noteTaking object to add/view notes
                break;
            case 6:
                // Contacts app option
                // Use contacts object to manage contacts
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

