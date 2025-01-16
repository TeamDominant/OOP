#ifndef CLASS_H
#define CLASS_H
#include <cmath>
using namespace std;

class Trapecia { // 6
private:
    double a, b, h;

public:
    Trapecia(double sideA, double sideB, double height);
    double getArea() const;
    double getPerimeter() const;
};

#endif