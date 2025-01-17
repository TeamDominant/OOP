#include "class.h"

// Конструктор
ThreeNumbers::ThreeNumbers(double a, double b, double c)
    : a(a), b(b), c(c) {}

// Геттер для a
double ThreeNumbers::getA() const {
    return a;
}

// Геттер для b
double ThreeNumbers::getB() const {
    return b;
}

// Геттер для c
double ThreeNumbers::getC() const {
    return c;
}

// Конструктор
TwoSets::TwoSets(double a, double b, double c, double x, double y, double z)
    : ThreeNumbers(a, b, c), x(x), y(y), z(z) {}

// Метод для вычисления скалярного произведения
double TwoSets::calculateDotProduct(const TwoSets& other) const {
    return getA() * other.getA() + getB() * other.getB() + getC() * other.getC() +
           x * other.x + y * other.y + z * other.z;
}