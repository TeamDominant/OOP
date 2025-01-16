#include "class.h"
#include <cmath>

Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {}

float Triangle::perimeterBasic() const {
    return a+b+c;
}

float Triangle::perimeterGeron() const {
    double p = perimeterBasic() / 2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}