// Topic: Object-Oriented Programming - Classes and Methods
// Description: Defines a class called 'Number' with two properties (a, b)
//              and two methods: squareSum() and cubeSum()
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Number {
public:
    int a, b;

    int squareSum() {
        return a * a + b * b;
    }

    int cubeSum() {
        return a * a * a + b * b * b;
    }
};

int main() {
    Number obj;
    obj.a = 5;
    obj.b = 6;

    cout << "Square Sum: " << obj.squareSum() << endl;
    cout << "Cube Sum: " << obj.cubeSum() << endl;

    return 0;
}
