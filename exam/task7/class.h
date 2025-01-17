#ifndef CLASS_H
#define CLASS_H

class TriangleChecker { // 7
    private:
    double side1;
    double side2;
    double side3;

    public:
    TriangleChecker(double s1, double s2, double s3);
    bool isTriangle() const;
};

#endif