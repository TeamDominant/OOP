#ifndef CLASS_H
#define CLASS_H
using namespace std;
#include <iostream>
#include <string>

// Класс Box
class Box {
protected:
    double length, width, height;

public:
    Box(double l, double w, double h);

    double surfaceArea() const;
};

// Класс WrappingPaper
class WrappingPaper {
protected:
    string color;
    double pricePerCm2;

public:
    WrappingPaper(string c, double price);

    double getPricePerCm2() const;
    string getColor() const;
};

// Класс Gift
class Gift : private Box, private WrappingPaper {
public:
    Gift(double l, double w, double h, string c, double price);

    double calculateWrappingCost() const;
    void printInfo() const;
};

#endif