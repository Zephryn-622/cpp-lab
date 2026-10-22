#include <iostream>
using namespace std;

int func(int a, int b = 20, int c = 30) {
    return a + b + c;
}

int func2(int a = 10, int b = 10);
int func2(int a = 10, int b){
    return a + b;
}

// if a parameter position got default value, the following parameters also need default value (to the right)

int main() {

    cout << func(10) << endl;
    cout << func(10, 10) << endl;
    cout << func(10, 10, 10) << endl;

    cout << func2(10) << endl;
    cout << func2(20, 10) << endl;
    cout << func2(0, -30) << endl;

    return 0;
}