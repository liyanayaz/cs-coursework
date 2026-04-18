// Topic: Object-Oriented Programming - Inheritance, Constructors and Method Overriding
// Description: Demonstrates inheritance with a base class 'Product' and three derived
//              classes: Textile, Food, and Technology. Each subclass uses a constructor
//              with initializer list and overrides the vat() method with its own
//              VAT calculation logic.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

// Base class
class Product {
protected:
    string name;
    double price;

public:
    Product(string n, double p) : name(n), price(p) {}

    virtual void vat() {
        cout << "VAT is included in our prices." << endl;
    }
};

// Derived class: Textile (18% VAT)
class Textile : public Product {
private:
    string size;
    string type;

public:
    Textile(string n, double p, string sz, string t) : Product(n, p), size(sz), type(t) {}

    void vat() override {
        double vatPrice = price * 1.18;
        cout << "Textile: " << name << " | Price: " << vatPrice
             << " | Size: " << size << " | Type: " << type << endl;
    }
};

// Derived class: Food (8% VAT)
class Food : public Product {
private:
    string type;
    double grams;

public:
    Food(string n, double p, string t, double g) : Product(n, p), type(t), grams(g) {}

    void vat() override {
        double vatPrice = price * 1.08;
        cout << "Food: " << name << " | Price: " << vatPrice
             << " | Grams: " << grams << " | Type: " << type << endl;
    }
};

// Derived class: Technology (20% VAT)
class Technology : public Product {
private:
    string brand;
    string model;

public:
    Technology(string n, double p, string br, string md) : Product(n, p), brand(br), model(md) {}

    void vat() override {
        double vatPrice = price * 1.20;
        cout << "Technology: " << name << " | Price: " << vatPrice
             << " | Brand: " << brand << " | Model: " << model << endl;
    }
};

int main() {
    Textile textile1("Shirt", 100, "M", "Linen");
    textile1.vat();

    Technology t1("Phone", 10000, "Apple", "16 Pro");
    t1.vat();

    Food g1("Chocolate", 100, "Milky", 150);
    g1.vat();

    return 0;
}
