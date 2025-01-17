#include "class.h"
using namespace std;

// Конструктор класса Vector
Vector::Vector(double startX, double startY, double endX, double endY)
    : x1(startX), y1(startY), x2(endX), y2(endY) {}

// Метод для вычисления длины вектора
double Vector::length() const {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Конструктор класса TwoVectors
TwoVectors::TwoVectors(double startX, double startY, double endX, double endY, double shiftA, double shiftB)
    : Vector(startX, startY, endX, endY), a(shiftA), b(shiftB) {}

// Метод для вычисления площади параллелограмма
double TwoVectors::calculateArea() const {
    double base = length();
    double height = abs(b); // Высота параллелограмма равна смещению по Oy
    return base * height;
}
