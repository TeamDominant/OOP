#include "class.h"
#include <cmath>
using namespace std;

// Конструктор
Vector::Vector(double x1, double y1, double x2, double y2)
    : x1(x1), y1(y1), x2(x2), y2(y2) {}

// Метод для вычисления длины вектора
double Vector::calculateLength() const {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Геттеры для координат
double Vector::getX1() const { return x1; }
double Vector::getY1() const { return y1; }
double Vector::getX2() const { return x2; }
double Vector::getY2() const { return y2; }

// Конструктор
TwoVectors::TwoVectors(double x1, double y1, double x2, double y2, double a, double b)
    : Vector(x1, y1, x2, y2) {
    // Смещаем второй вектор на a по оси Ox и на b по оси Oy
    x1_2 = x1 + a;
    y1_2 = y1 + b;
    x2_2 = x2 + a;
    y2_2 = y2 + b;
}

// Метод для вычисления площади параллелограмма
double TwoVectors::calculateArea() const {
    // Площадь параллелограмма: 
    // |(x2 - x1) * (y2_2 - y1_2) - (y2 - y1) * (x2_2 - x1_2)|
    double x_component = getX2() - getX1(); // Компонент X первого вектора
    double y_component = getY2() - getY1(); // Компонент Y первого вектора
    double x_component_2 = x2_2 - x1_2;     // Компонент X второго вектора
    double y_component_2 = y2_2 - y1_2;     // Компонент Y второго вектора

    // Площадь параллелограмма через детерминант (векторное произведение)
    double area = std::abs(x_component * y_component_2 - y_component * x_component_2);
    return area;
}