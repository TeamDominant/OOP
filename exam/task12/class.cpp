#include "class.h"

// Конструктор
Parallelepiped::Parallelepiped(double length, double width, double height)
    : length(length), width(width), height(height) {}

// Метод для вычисления объема
double Parallelepiped::calculateVolume() const {
    return length * width * height;
}

// Конструктор
MetalBar::MetalBar(double length, double width, double height, double density)
    : Parallelepiped(length, width, height), density(density) {}

// Метод для вычисления массы
double MetalBar::calculateMass() const {
    return calculateVolume() * density;
}
