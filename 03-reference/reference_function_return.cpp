#include <iostream>
using namespace std;

int & test01() {
    int a = 10;
    return a;
}

int & test02() {
    static int a = 20;
    return a;
}

int main() {

    int & ref = test01();

    cout << "ref = " << ref << endl;
    cout << "ref = " << ref << endl;
    // it will occur warning because a is local area variable which already release its data;

    int & ref2 = test02();
    cout << "ref 2 = " << ref2 << endl;
    cout << "ref 2 = " << ref2 << endl;
    // it will not occur warning because a is global area variable which not release its data before program end

    test02() = 1000;
    cout << "ref 2 = " << ref2 << endl;
    cout << "ref 2 = " << ref2 << endl;

    return 0;
}