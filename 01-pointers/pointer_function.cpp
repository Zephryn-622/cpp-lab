#include <iostream>
using namespace std;

void swap_1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // This function will not swap the values of a and b in the main function
}

void swap_2(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    // This function will swap the values of a and b in the main function
}

int main() {
    int a = 10;
    int b = 200;
    swap_1(a, b);
    cout << "After swap_1:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << endl;

    swap_2(&a, &b);
    cout << "After swap_2:" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << endl;

    return 0;
}