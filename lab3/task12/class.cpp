#include "class.h"
#include <cmath> // Для математических операций

// Конструктор для Параллелепипеда
Parallelepiped::Parallelepiped(double l, double w, double h)
    : length(l), width(w), height(h) {}

// Вычисление объема Параллелепипеда
double Parallelepiped::Volume() const {
    return length * width * height;
}

// Конструктор для Тетраэдра
Tetrahedron::Tetrahedron(double e) : edge(e) {}

// Вычисление объема Тетраэдра
double Tetrahedron::Volume() const {
    return (pow(edge, 3) / (6 * sqrt(2)));
}

// Конструктор для Шара
Sphere::Sphere(double r) : radius(r) {}

// Вычисление объема Шара
double Sphere::Volume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}