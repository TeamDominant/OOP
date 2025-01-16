#ifndef CLASS_H
#define CLASS_H

using namespace std;

class Product {
    private:
    int price;
    int amount;

    public:
    Product(int price, int amount);
    float getPrice() const;
};

#endif