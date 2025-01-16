#include "class.h"
#include <cmath>

Trapecia::Trapecia(double sideA, double sideB, double height) : a(sideA), b(sideB), h(height) {}

double Trapecia::getArea() const {
    return (a + b) * h / 2;
}

double Trapecia::getPerimeter() const {
    return a + b + 2 * sqrt(h * h + ((b - a) / 2) * ((b - a) / 2));
}