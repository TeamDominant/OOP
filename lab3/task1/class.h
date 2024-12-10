#ifndef CLASS_H
#define CLASS_H

using namespace std;

class Point {
private:
    double x;
    double y;

public:
    // Конструкторы
    Point();
    Point(double x, double y);

    // Методы для вычисления расстояния
    double Distance() const;                 // Расстояние до начала координат
    double Distance(const Point& other) const; // Расстояние до заданной точки

    // Геттеры и сеттеры (опционально)
    double GetX() const;
    double GetY() const;
    void SetX(double x);
    void SetY(double y);
};

#endif