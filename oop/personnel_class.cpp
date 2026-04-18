// Topic: Object-Oriented Programming - Multiple Objects
// Description: Defines a Personnel class with name, surname, and age properties
//              and a display() method. Creates 3 objects and prints their info.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Personnel {
public:
    string firstName, lastName;
    int age;

    void display() {
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: "  << lastName  << endl;
        cout << "Age: "        << age       << endl;
        cout << "-------------------" << endl;
    }
} Employee1, Employee2, Employee3;

int main() {
    Employee1 = { "Liyan",   "Ayaz",     18 };
    Employee2 = { "Emir",    "Buclulgan", 18 };
    Employee3 = { "Yavrucak","Bucu",       0 };

    Employee1.display();
    Employee2.display();
    Employee3.display();

    return 0;
}
