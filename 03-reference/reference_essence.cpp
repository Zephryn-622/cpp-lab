#include <iostream>
using namespace std;

void func(int & ref) {
    ref = 100;
    // this function auto transform to int * const ref = &a; after reference has detected
    // ref is reference, transform into *ref = 100;
}

int main() {
    int a = 10;

    // auto transform to int * const ref = &a; constant pointer can't changed point to another variable, that's why reference can't be changed
    int & ref = a;
    ref = 20;
    // ref is reference, transform into *ref = 20;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);

    return 0;
}