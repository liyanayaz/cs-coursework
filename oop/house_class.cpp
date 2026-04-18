// Topic: Object-Oriented Programming - Encapsulation (Getters & Setters)
// Description: Defines a House class with private fields (apartmentNo, floor, rent, city)
//              and setter methods with data validation. Demonstrates encapsulation
//              with multiple data types and controlled access through getters.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class House {
private:
    int apartmentNo, floor;
    double rent;
    string city;

public:
    void setApartmentNo(int apartmentNo) {
        if (apartmentNo >= 1 && apartmentNo <= 8)
            this->apartmentNo = apartmentNo;
        else
            cout << "Invalid apartment number. Please enter a value between 1-8." << endl;
    }

    void setFloor(int floor) {
        if (floor >= 1 && floor <= 4)
            this->floor = floor;
        else
            cout << "Invalid floor. Please enter a value between 1-4." << endl;
    }

    void setRent(double rent) {
        this->rent = rent;
    }

    void setCity(string city) {
        this->city = city;
    }

    int getApartmentNo() { return apartmentNo; }
    int getFloor()       { return floor;       }
    double getRent()     { return rent;        }
    string getCity()     { return city;        }
} h1;

int main() {
    h1.setApartmentNo(3);
    h1.setFloor(2);
    h1.setRent(50000);
    h1.setCity("Istanbul");

    cout << "Apartment No: " << h1.getApartmentNo() << endl;
    cout << "Floor: "        << h1.getFloor()       << endl;
    cout << "Rent: "         << h1.getRent()        << endl;
    cout << "City: "         << h1.getCity()        << endl;

    return 0;
}
