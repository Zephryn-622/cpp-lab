#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int * p = &a;
    // p is a pointer that stores the address of variable a
    // *p is the value stored at the address which is the value of a

    cout << "Address of a: " << p << endl;
    cout << "Value of a: " << *p << endl;
    cout << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a: " << a << endl;
    cout << endl;
    // p = &a; and *p = a; are equivalent

    *p = 100;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a: " << a << endl;
    cout << endl;
    // the address still remains the same, but the value of a has changed to 100

    int b = 50;
    p = &b;
    cout << "Address of b: " << p << endl;
    cout << "Value of b: " << *p << endl;
    cout << endl;
    // p now points to the address of b, and *p is the value of b

    cout << "Size of p is " << sizeof(p) << " bytes" << endl;
    cout << "Size of int * is " << sizeof(int *) << " bytes" << endl;
    cout << "Size of double * is " << sizeof(double *) << " bytes" << endl;
    cout << "Size of char * is " << sizeof(char *) << " bytes" << endl;
    cout << endl;
    // In 32-bit systems, the size of a pointer is 4 bytes
    // In 64-bit systems, the size of a pointer is 8 bytes
    // no matter what type of pointer it is

    int * q = NULL;
    // q points to NULL, which means it does not point to any valid memory address (points to nothing)

    // cout << "Address of q: " << q << endl;
    // cout << "Value of q: " << *q << endl; 
    // This will cause an error because 0 ~ 255 is system reserved memory, user cannot access it

    int * r = (int *)0x1100;
    // r is a wild pointer, which points to a random memory address (0x1100 in this case)

    cout << "Value of r: " << *r << endl;




    return 0;
}