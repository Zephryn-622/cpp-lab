#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 100;
    const int * p = &a;
    // p is a const pointer to an int, which means the value cannot be changed, but p can point to another int variable

    p = &b;
    // *p = 200;
    // this will cause an error because p is a const pointer

    cout << "Address of b: " << p << endl;
    cout << "Value of b: " << *p << endl;
    cout << endl;

    int * const q = &a;
    // q is a pointer to a const int, which means the value can be changed, but q cannot point to another int variable

    *q = 200;
    // q = &b;
    // this will cause an error because q is a pointer to a const int

    cout << "Address of a: " << q << endl;
    cout << "Value of a: " << *q << endl;
    cout << endl;

    const int * const r = &a;
    // r is a const pointer to a const int, which means the value cannot be changed, and r cannot point to another int variable

    // *r = 300;
    // r = &b;
    // both of these will cause an error because r is a const pointer to a const int
    
    cout << "Address of a: " << r << endl;
    cout << "Value of a: " << *r << endl;
    cout << endl;

    return 0;
}