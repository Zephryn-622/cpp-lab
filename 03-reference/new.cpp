#include <iostream>
using namespace std;

int * func() {
    // "new" return a pointer to that data type
    int * p = new int(10);
    return p;
}

void test01() {
    int * q = func();
    cout << *q << endl;
    cout << *q << endl;
    cout << *q << endl;
    // it will print 10 if I don't release the data
    // if want to release the data, use "delete"

    delete q;
    // cout << *q << endl; 
    // it already release data, if it runs will occur error
}

void test02() {
    int * arr = new int[10];

    for(int i = 0; i < 10; i++) {
        arr[i] = i + 100;
    }

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }

    // if want to release data in array, must add []
    delete [] arr;
}

int main() {

    test01();
    test02();

    return 0;
}