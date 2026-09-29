#include <iostream>
using namespace std;

struct Student {
    int matric_ID;
    string name;
    int age;
    double score;
};

void PrintStudentInfo(const Student * stu) {
    // stu->matric_ID = 2000;
    // stu->age = 100;
    // Student Info can't be changed but only read

    cout << "Matric_ID: " << stu->matric_ID << endl;
    cout << "Name: " << stu->name << endl;
    cout << "Age: " << stu->age << endl;
    cout << "Score: " << stu->score << endl;
    cout << endl;
}

int main() {
    Student s = {9543, "Jackie", 23, 81};

    PrintStudentInfo(&s);

    return 0;
}