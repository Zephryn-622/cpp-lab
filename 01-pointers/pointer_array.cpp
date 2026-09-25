#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int * p = arr;
    // p is a pointer that points to the first element of the array

    cout << "First element of array: " << arr[0] << endl;
    cout << "First element of array using pointer: " << *p << endl;
    cout << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << " of array: " << *(p + i) << endl;

        /*
        Alternative way: 
        cout << "Element " << i + 1 << " of array: " << *p << endl;
        p++; 
        // move the pointer to the next element with 4 bytes (size of int)
        // *(p + i) == arr[i] == *(arr + i)
        */
    }
    cout << endl;

    int a = 10;
    int b = 20;
    int c = 30;

    int * q[3] = {&a, &b, &c};
    // q is an array of pointers, which stores the addresses of variables a, b, and c

    for(int i = 0; i < 3; i++) {
        cout << "Address of variable " << i + 1 << ": " << q[i] << endl;
        cout << "Value of variable " << i + 1 << ": " << *q[i] << endl;
        cout << endl;
    }

    return 0;
}