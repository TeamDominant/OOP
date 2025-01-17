#ifndef CLASS_H
#define CLASS_H
#include <cmath>
using namespace std;

class Point {
protected:
    double x; // Координата x
    double y; // Координата y

public:
    // Конструктор
    Point(double x, double y);

    // Геттеры для координат
    double getX() const;
    double getY() const;
};

class Segment : public Point {
private:
    double x2; // Координата конца отрезка по x
    double y2; // Координата конца отрезка по y

public:
    // Конструктор
    Segment(double x1, double y1, double x2, double y2);

    // Метод для вычисления длины отрезка
    double calculateLength() const;
};

#endif