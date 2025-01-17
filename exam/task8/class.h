#ifndef CLASS_H
#define CLASS_H
using namespace std;

class TriangleChecker {
    private:
    double side1,side2,side3;

    public:
    TriangleChecker(double s1, double s2, double s3);
    bool isTriangle() const;
};

#endif