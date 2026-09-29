#include <iostream>
using namespace std;

// Define a Student structure with basic information
struct Student {
    string name;
    int age;
    int score;
};

// Define a Lecturer structure that contains a nested Student object
struct Lecturer {
    int id;
    string name;
    int age;
    struct Student s;
};

int main() {
    Lecturer t;
    t.id = 9527;
    t.name = "Peter";
    t.age = 44;
    t.s.name = "Bob";
    t.s.age = 19;
    t.s.score = 88;

    // Display lecturer information
    cout << "Lecturer Info" << endl;
    cout << "ID: " << t.id << endl;
    cout << "Name: " << t.name << endl;
    cout << "Age: " << t.age << endl;
    cout << endl;

    // Display student information stored inside the lecturer object
    cout << "Student Info" << endl;
    cout << "Name: " << t.s.name << endl;
    cout << "Age: " << t.s.age << endl;
    cout << "Score: " << t.s.score << endl;

    return 0;
}