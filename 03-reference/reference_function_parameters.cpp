#include <iostream>
using namespace std;

void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap02(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap03(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 10;

    swap01(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // changed unsuccessfully

    swap02(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // changed successfully

    swap03(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    // changed successfully

    return 0;
}