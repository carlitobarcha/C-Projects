#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person1;
    person1.name = "Khalid";
    person1.age = 20;
    person1.displayInfo();
    return 0;
}

