#include "class.h"
#include <cmath> // Для функции sqrt

// Конструкторы
Point::Point() : x(0), y(0) {}

Point::Point(double x, double y) : x(x), y(y) {}

// Метод: Расстояние до начала координат
double Point::Distance() const {
    return sqrt(x * x + y * y);
}

// Метод: Расстояние до заданной точки
double Point::Distance(const Point& other) const {
    double dx = x - other.x;
    double dy = y - other.y;
    return sqrt(dx * dx + dy * dy);
}

// Геттеры и сеттеры
double Point::GetX() const {
    return x;
}

double Point::GetY() const {
    return y;
}

void Point::SetX(double x) {
    this->x = x;
}

void Point::SetY(double y) {
    this->y = y;
}