// Topic: Object-Oriented Programming - Encapsulation with Business Logic
// Description: Defines a Product class with private fields (quantity, vatRate)
//              and a method to calculate total price including VAT.
//              Unit price is fixed at 1000. VAT rate is 0.20 (20%).
// Course: Object-Oriented Programming

#include <iostream>
using namespace std;

class Product {
private:
    int quantity;
    double vatRate;

public:
    void setQuantity(int quantity) {
        this->quantity = quantity;
    }

    void setVatRate(double vatRate) {
        this->vatRate = vatRate;
    }

    double calculateVat() {
        return 1000 * quantity * vatRate;
    }
} p1;

int main() {
    p1.setQuantity(10);
    p1.setVatRate(0.20);

    cout << "VAT Amount: " << p1.calculateVat() << endl;

    return 0;
}
