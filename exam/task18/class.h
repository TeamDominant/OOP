#ifndef CLASS_H
#define CLASS_H

#include <cmath>

class Vector {
protected:
    double x1, y1, x2, y2;

public:
    Vector(double startX, double startY, double endX, double endY);

    double length() const;
};

class TwoVectors : public Vector {
private:
    double a, b; // смещение второго вектора

public:
    TwoVectors(double startX, double startY, double endX, double endY, double shiftA, double shiftB);

    double calculateArea() const;
};

#endif
