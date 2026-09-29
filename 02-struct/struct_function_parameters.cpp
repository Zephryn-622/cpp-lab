#include <iostream>
using namespace std;

struct Student {
    int matric_ID;
    string name;
    int age;
    double score;
};

void Student_Info_1(struct Student stu) {
    stu.matric_ID = 2000;
    stu.age = 100;
    // Change student matric ID and age
    // Pass-by-value

    cout << "Matric_ID: " << stu.matric_ID << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Age: " << stu.age << endl;
    cout << "Score: " << stu.score << endl;
    cout << endl;
}

void Student_Info_2(struct Student * stu) {
    stu->matric_ID = 2000;
    stu->age = 100;
    // Change student matric ID and age
    // Pass-by-pointer, can reduce memory space used and no new copy created

    cout << "Matric_ID: " << stu->matric_ID << endl;
    cout << "Name: " << stu->name << endl;
    cout << "Age: " << stu->age << endl;
    cout << "Score: " << stu->score << endl;
    cout << endl;
}

int main() {
    Student stu = {2923, "Zephryn", 19, 92.5};

    Student_Info_1(stu);
    cout << "Matric_ID (main): " << stu.matric_ID << endl;
    cout << "Name (main): " << stu.name << endl;
    cout << "Age (main): " << stu.age << endl;
    cout << "Score (main): " << stu.score << endl;
    cout << endl;
    // Changed unsuccessfully

    Student_Info_2(&stu);
    cout << "Matric_ID (main): " << stu.matric_ID << endl;
    cout << "Name (main): " << stu.name << endl;
    cout << "Age (main): " << stu.age << endl;
    cout << "Score (main): " << stu.score << endl;
    cout << endl;
    // Changed successfully

    return 0;
}