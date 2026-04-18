// Topic: Object-Oriented Programming - Encapsulation (Getters & Setters)
// Description: Defines a Student class using private and public access modifiers.
//              Demonstrates data validation inside setter methods and
//              controlled access through getter methods.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Student {
public:
    string fullName;
    int age;
    double average;

    void setFullName(string fullName) {
        this->fullName = fullName;
    }

    void setAge(int age) {
        if (age >= 0 && age <= 100)
            this->age = age;
        else
            cout << "Invalid age. Please enter a value between 0-100." << endl;
    }

    void setAverage(double average) {
        if (average >= 0 && average <= 100)
            this->average = average;
        else
            cout << "Invalid average. Please enter a value between 0-100." << endl;
    }

    string getFullName() { return fullName; }
    int getAge()         { return age;      }
    double getAverage()  { return average;  }
} o1;

int main() {
    o1.setFullName("Liyan Ayaz");
    o1.setAge(24);
    o1.setAverage(78.5);

    cout << "Full Name: " << o1.getFullName() << endl;
    cout << "Age: "       << o1.getAge()      << endl;
    cout << "Average: "   << o1.getAverage()  << endl;

    return 0;
}
