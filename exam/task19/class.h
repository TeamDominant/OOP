#ifndef CLASS_H
#define CLASS_H
using namespace std;
#include <iostream>

// Базовый класс Point
class Point {
protected:
    double x, y;

public:
    Point(double coordX, double coordY);

    void moveRight(double value);
    void moveLeft(double value);
    void moveUp(double value);
    void moveDown(double value);
};

// Базовый класс Color
class Color {
protected:
    int r, g, b;

public:
    Color(int red, int green, int blue);

    void setColor(int red, int green, int blue);
};

// Производный класс ColoredPoint
class ColoredPoint : private Point, private Color {
public:
    ColoredPoint(double coordX, double coordY, int red, int green, int blue);

    void moveRight(double value);  // Публичный доступ к методам перемещения
    void moveLeft(double value);
    void moveUp(double value);
    void moveDown(double value);

    void setColor(int red, int green, int blue); // Публичный доступ к изменению цвета

    void printInfo() const; // Метод для вывода информации
};

#endif
