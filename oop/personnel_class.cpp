// Topic: Object-Oriented Programming - Classes with Private Fields and Constructor-like Setter
// Description: Defines a Personnel class with private fields and a single setter method
//              to assign all values at once. Creates 3 objects and displays their info.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Personnel {
private:
    string firstName, lastName;
    int age;

public:
    void setInfo(string firstName, string lastName, int age) {
        this->firstName = firstName;
        this->lastName  = lastName;
        this->age       = age;
    }

    void display() {
        cout << "Personnel Info:" << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: "  << lastName  << endl;
        cout << "Age: "        << age       << endl;
        cout << "**************" << endl;
    }
};

int main() {
    Personnel p1, p2, p3;

    p1.setInfo("Ali", "Ak", 30);
    p1.display();

    p2.setInfo("Ahmet", "Akgun", 35);
    p2.display();

    p3.setInfo("Ayse", "Ak", 25);
    p3.display();

    return 0;
}
