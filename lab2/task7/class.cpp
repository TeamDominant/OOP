#include "class.h"

// Реализация методов базового класса ThreeNumbers
ThreeNumbers::ThreeNumbers(double a_val, double b_val, double c_val)
    : a(a_val), b(b_val), c(c_val) {}

double ThreeNumbers::getA() const {
    return a;
}

double ThreeNumbers::getB() const {
    return b;
}

double ThreeNumbers::getC() const {
    return c;
}

void ThreeNumbers::setA(double a_val) {
    a = a_val;
}

void ThreeNumbers::setB(double b_val) {
    b = b_val;
}

void ThreeNumbers::setC(double c_val) {
    c = c_val;
}

// Реализация методов производного класса TwoSets
TwoSets::TwoSets(double a_val, double b_val, double c_val, double x_val, double y_val, double z_val)
    : ThreeNumbers(a_val, b_val, c_val), x(x_val), y(y_val), z(z_val) {}

double TwoSets::scalarProduct() const {
    return a * x + b * y + c * z;
}

double TwoSets::getX() const {
    return x;
}

double TwoSets::getY() const {
    return y;
}

double TwoSets::getZ() const {
    return z;
}

void TwoSets::setX(double x_val) {
    x = x_val;
}

void TwoSets::setY(double y_val) {
    y = y_val;
}

void TwoSets::setZ(double z_val) {
    z = z_val;
}
