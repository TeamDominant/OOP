#ifndef CLASS_H
#define CLASS_H

class Vector {
protected:
    double x1, y1, x2, y2;  // Координаты начала и конца вектора

public:
    // Конструктор
    Vector(double x1, double y1, double x2, double y2);

    // Метод для вычисления длины вектора
    double calculateLength() const;

    // Геттеры для координат
    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
};

class TwoVectors : public Vector {
private:
    double x1_2, y1_2, x2_2, y2_2;  // Координаты второго вектора (смещенного)

public:
    // Конструктор
    TwoVectors(double x1, double y1, double x2, double y2, double a, double b);

    // Метод для вычисления площади параллелограмма
    double calculateArea() const;
};

#endif