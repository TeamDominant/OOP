#ifndef CLASS_H
#define CLASS_H

using namespace std;

// Абстрактный базовый класс "Фигура"
class Figure {
public:
    virtual double Volume() const = 0; // Чисто виртуальная функция для объема
    virtual ~Figure() {} // Виртуальный деструктор
};

// Класс "Параллелепипед"
class Parallelepiped : public Figure {
private:
    double length, width, height;

public:
    Parallelepiped(double l, double w, double h);
    double Volume() const override;
};

// Класс "Тетраэдр"
class Tetrahedron : public Figure {
private:
    double edge;

public:
    Tetrahedron(double e);
    double Volume() const override;
};

// Класс "Шар"
class Sphere : public Figure {
private:
    double radius;

public:
    Sphere(double r);
    double Volume() const override;
};

#endif
