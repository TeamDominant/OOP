#ifndef CLASS_H
#define CLASS_H

class Parallelepiped {
protected:
    double length;  // Длина параллелепипеда
    double width;   // Ширина параллелепипеда
    double height;  // Высота параллелепипеда

public:
    // Конструктор
    Parallelepiped(double length, double width, double height);

    // Метод для вычисления объема
    double calculateVolume() const;
};

class MetalBar : public Parallelepiped {
private:
    double density; // Удельный вес

public:
    // Конструктор
    MetalBar(double length, double width, double height, double density);

    // Метод для вычисления массы
    double calculateMass() const;
};

#endif