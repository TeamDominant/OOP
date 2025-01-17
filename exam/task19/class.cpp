#include "class.h"
using namespace std;

// Реализация методов класса Point
Point::Point(double coordX, double coordY) : x(coordX), y(coordY) {}

void Point::moveRight(double value) { x += value; }
void Point::moveLeft(double value) { x -= value; }
void Point::moveUp(double value) { y += value; }
void Point::moveDown(double value) { y -= value; }

// Реализация методов класса Color
Color::Color(int red, int green, int blue) : r(red), g(green), b(blue) {}

void Color::setColor(int red, int green, int blue) {
    r = red;
    g = green;
    b = blue;
}

// Реализация методов класса ColoredPoint
ColoredPoint::ColoredPoint(double coordX, double coordY, int red, int green, int blue)
    : Point(coordX, coordY), Color(red, green, blue) {}

void ColoredPoint::moveRight(double value) {
    Point::moveRight(value);
}

void ColoredPoint::moveLeft(double value) {
    Point::moveLeft(value);
}

void ColoredPoint::moveUp(double value) {
    Point::moveUp(value);
}

void ColoredPoint::moveDown(double value) {
    Point::moveDown(value);
}

void ColoredPoint::setColor(int red, int green, int blue) {
    Color::setColor(red, green, blue);
}

void ColoredPoint::printInfo() const {
    cout << "Point: (" << x << ", " << y << "), Color: (" << r << ", " << g << ", " << b << ")\n";
}