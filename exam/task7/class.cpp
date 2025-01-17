#include "class.h"

TriangleChecker::TriangleChecker(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

bool TriangleChecker::isTriangle() const {
    return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}