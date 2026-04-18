// Topic: Pointers - Basic Usage
// Description: Demonstrates pointer declaration, address-of operator,
//              dereferencing, and pointer arithmetic in C++
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

int main() {
    int x;
    int* ptr;

    cout << "Enter a value for x: ";
    cin >> x;
    ptr = &x;

    cout << "Pointer value (address of x): " << ptr << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value of x+1: " << x + 1 << endl;
    cout << "Address of x + 1: " << &x + 1 << endl;

    int y = x + 1;
    int* ptr2 = &y;
    cout << "Pointer value (address of x+1): " << ptr2 << endl;

    return 0;
}
