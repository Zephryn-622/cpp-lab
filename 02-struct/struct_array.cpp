#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    struct Student arr[3] = {
        {"Angela", 18, 100},
        {"Bob", 16, 97},
        {"John", 20, 99}
    };

    arr[2].age = 19;
    arr[0].score = 98;

    cout << "John's age: " << arr[2].age << endl;
    cout << endl;

    for(int i = 0; i < 3; i++) {
        cout << "Name: " << arr[i].name << endl;
        cout << "Age: " << arr[i].age << endl;
        cout << "Score: " << arr[i].score << endl;
        cout << endl;
    }

    return 0;
}