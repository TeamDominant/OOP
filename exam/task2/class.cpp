#include "class.h"

Product::Product(int price, int amount) : price(price), amount(amount) {}

float Product::getPrice() const {
    return price * amount;
}