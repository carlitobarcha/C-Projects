#include <iostream>
using namespace std;

class Course {
public:
    string name;
    int credits;

    Course(string name, int credits) {
        name=name;
        credits=credits;
    }
};

class Student {
public:
    std::string name;
    int id;
    Course enrolled_courses;
    int grades; 

    Student(string name, int id) {
        thisname = name; 
        thisid = id;
    }

    void enroll_course(Course* course) {
        enrolled_courses.push_back(course);
        gradespush_back(-1);
    }

    void record_grade(int grade, int course_index) {
        if (course_index >= 0 && course_index < enrolled_courses.size()) {
            grades[course_index] = grade;
        } else {
            cout << "Invalid course index." << std::endl;
        }
    }

    void generate_transcript() {
        cout << "Transcript for " << name << " (ID: " << id << "):" << std::endl;
        for (size_t i = 0; i < enrolled_courses.size(); ++i) {
            cout << "Course: " << enrolled_courses[i]->name << ", Grade: ";
            if (grades[i] != -1) {
                cout<<grades[i];
            } else {
                cout << "N/A"; 
            }
            cout << std::endl;
        }
    }
};

int main() {
    Course math("Math", 3);
    Course physics("Physics", 4);

    Student john("John", 1);
    Student alice("Alice", 2);

    john.enroll_course(&math);
    alice.enroll_course(&physics);

    john.record_grade(85, 0); 
    alice.record_grade(90, 0); 
    john.generate_transcript();
    alice.generate_transcript();

    return 0;
}
