#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
}s3;
// Create variable after declaration strcut

int main() {
    struct Student s1;
    s1.name = "Angela";
    s1.age = 20;
    s1.score = 100;
    // Method 1

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Score: " << s1.score << endl;
    cout << endl;

    struct Student s2 = {"John", 18, 90};
    // Method 2

    cout << "Name: " << s2.name << endl;
    cout << "Age: " << s2.age << endl;
    cout << "Score: " << s2.score << endl;
    cout << endl;

    s3.name = "Bob";
    s3.age = 19;
    s3.score = 99;
    // Method 3

    cout << "Name: " << s3.name << endl;
    cout << "Age: " << s3.age << endl;
    cout << "Score: " << s3.score << endl;
    cout << endl;

    return 0;
}