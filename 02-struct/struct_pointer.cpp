#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student s = {"Angela", 22, 89};
    struct Student * p = &s;

    cout << "Name: " << p->name << endl;
    cout << "Age: " << p->age << endl;
    cout << "Score: " << p->score << endl;
    cout << endl;
    // We use -> as the symbol for pointer to output the element in struct
    
    return 0;
}