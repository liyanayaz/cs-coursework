// Topic: Object-Oriented Programming - Classes and Methods
// Description: Defines a Rectangle class with two properties (shortSide, longSide)
//              and two methods: area() and perimeter()
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Rectangle {
public:
    int longSide, shortSide;

    int area() {
        return longSide * shortSide;
    }

    int perimeter() {
        return (longSide + shortSide) * 2;
    }
} x;

int main() {
    x.shortSide = 5;
    x.longSide = 10;

    cout << "Area: " << x.area() << endl;
    cout << "Perimeter: " << x.perimeter() << endl;

    return 0;
}
