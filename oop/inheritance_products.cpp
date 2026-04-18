// Topic: Object-Oriented Programming - Inheritance and Method Overriding
// Description: Demonstrates inheritance with a base class 'Product' and three
//              derived classes: Technology, Textile, and Food.
//              Each subclass overrides the vat() method from the base class.
//              Technology applies 20% VAT on top of the base price.
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

// Base class
class Product {
public:
    string name;
    double price;

    virtual void vat() {
        cout << "VAT is included in the product price." << endl;
    }
};

// Derived class: Technology
class Technology : public Product {
public:
    string brand, model;

    void vat() override {
        cout << "Technology - " << name << " (" << brand << " " << model << ")" << endl;
        cout << "Price with 20% VAT: " << price * 1.20 << endl;
    }
};

// Derived class: Textile
class Textile : public Product {
public:
    string size, type;

    void vat() override {
        cout << "Textile - " << name << " | Size: " << size << " | Type: " << type << endl;
        cout << "Price (VAT included): " << price << endl;
    }
};

// Derived class: Food
class Food : public Product {
public:
    string type;
    double grams;

    void vat() override {
        cout << "Food - " << name << " | Type: " << type << " | Grams: " << grams << "g" << endl;
        cout << "Price (VAT included): " << price << endl;
    }
};

int main() {
    Technology t1;
    t1.name  = "Laptop";
    t1.price = 30000;
    t1.brand = "Dell";
    t1.model = "XPS 15";
    t1.vat();

    cout << "-------------------" << endl;

    Textile tx1;
    tx1.name  = "T-Shirt";
    tx1.price = 500;
    tx1.size  = "M";
    tx1.type  = "Cotton";
    tx1.vat();

    cout << "-------------------" << endl;

    Food f1;
    f1.name   = "Cheese";
    f1.price  = 150;
    f1.type   = "Aged";
    f1.grams  = 250;
    f1.vat();

    return 0;
}
