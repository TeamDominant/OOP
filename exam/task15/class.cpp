#include "class.h"
using namespace std;

// Конструктор
Point::Point(double x, double y) : x(x), y(y) {}

// Геттер для координаты x
double Point::getX() const {
    return x;
}

// Геттер для координаты y
double Point::getY() const {
    return y;
}

// Конструктор
Segment::Segment(double x1, double y1, double x2, double y2)
    : Point(x1, y1), x2(x2), y2(y2) {}

// Метод для вычисления длины отрезка
double Segment::calculateLength() const {
    return sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));
}
