#include "class.h"
using namespace std;

// Реализация методов класса Box
Box::Box(double l, double w, double h) : length(l), width(w), height(h) {}

double Box::surfaceArea() const {
    return 2 * (length * width + length * height + width * height);
}

// Реализация методов класса WrappingPaper
WrappingPaper::WrappingPaper(string c, double price) : color(c), pricePerCm2(price) {}

double WrappingPaper::getPricePerCm2() const {
    return pricePerCm2;
}

string WrappingPaper::getColor() const {
    return color;
}

// Реализация методов класса Gift
Gift::Gift(double l, double w, double h, string c, double price)
    : Box(l, w, h), WrappingPaper(c, price) {}

double Gift::calculateWrappingCost() const {
    return surfaceArea() * getPricePerCm2();
}

void Gift::printInfo() const {
    cout << "Gift dimensions: " << length << " x " << width << " x " << height << ", Color: " << getColor() << ", Wrapping cost: " << calculateWrappingCost() << " units\n";
}