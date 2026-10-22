#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int & b = a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // reference same like take an alias from another variable (a)

    b = 100;

    cout << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // a and b will have same value

    // int &c;
    // it will occur error because reference must be initialised

    int &c = a; // it can't be changed after initialised
    c = b; // this is assignment operation, not change the reference

    cout << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    // a, b and c will get same value


    return 0;
}