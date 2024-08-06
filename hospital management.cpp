#include <iostream>
#include <string>

using namespace std;

class Patient {
private:
    string name;
    int age;
    string gender;
    string condition;

public:
    Patient(const string& name, int age, const string& gender, const string& condition)
        : name(name), age(age), gender(gender), condition(condition) {}

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Condition: " << condition << endl;
    }
};

int main() {
    // Create patients
    Patient patient1("John Doe", 35, "Male", "Fever");
    Patient patient2("Jane Smith", 45, "Female", "Broken leg");

    // Display information of patient1
    cout << "Patient 1 Information:" << endl;
    patient1.displayInfo();
    cout << endl;

    // Display information of patient2
    cout << "Patient 2 Information:" << endl;
    patient2.displayInfo();
    cout << endl;

    return 0;
}

