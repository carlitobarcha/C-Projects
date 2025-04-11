#include <iostream>
#include <string>

using namespace std;

struct StudentNode {
    string name;
    StudentNode* next;

    StudentNode(string studentName) {
        name = studentName;
        next = nullptr;
    }
};

class Classroom {
private:
    StudentNode* head;

public:
    Classroom() {
        head = nullptr;
    }

    void addStudent(string studentName) {
        StudentNode* newStudent = new StudentNode(studentName);
        if (head == nullptr) {
            head = newStudent;
        } else {
            StudentNode* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newStudent;
        }
        cout << studentName << " has joined the class.\n";
    }

    void removeStudent(string studentName) {
        if (head == nullptr) {
            cout << "No students to remove.\n";
            return;
        }

        if (head->name == studentName) {
            StudentNode* temp = head;
            head = head->next;
            delete temp;
            cout << studentName << " has left the class.\n";
            return;
        }

        StudentNode* current = head;
        StudentNode* previous = nullptr;
        while (current != nullptr && current->name != studentName) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << studentName << " not found.\n";
        } else {
            previous->next = current->next;
            delete current;
            cout << studentName << " has left the class.\n";
        }
    }

    void displaySeatingOrder() {
        if (head == nullptr) {
            cout << "No students in the class.\n";
            return;
        }

        StudentNode* temp = head;
        cout << "Current seating arrangement:\n";
        while (temp != nullptr) {
            cout << temp->name << " -> ";
            temp = temp->next;
        }
        cout << "End\n";
    }
};

int main() {
    Classroom classroom;

    classroom.addStudent("Khalid");
    classroom.addStudent("Furqan");
    classroom.addStudent("Hammad");

    classroom.displaySeatingOrder();

    classroom.removeStudent("Furqan");
    classroom.displaySeatingOrder();

    classroom.addStudent("Owais");
    classroom.displaySeatingOrder();

    classroom.removeStudent("Khalid");
    classroom.displaySeatingOrder();

    return 0;
}

