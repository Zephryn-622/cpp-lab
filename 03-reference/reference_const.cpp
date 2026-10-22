#include <iostream>
using namespace std;

void showValue(const int & v) {
    // v += 10
    cout << v << endl;
    // this function avoid the value changed
}

int main() {

    // int a = 10;
    // int & ref = 10 is illegal because it needs a memory space
    const int & ref = 10; 
    // after added const, compiler convert code into int temp = 10; const int & ref = temp;
    // only read and unable to change value

    int a = 100;
    showValue(a);

    return 0;
}