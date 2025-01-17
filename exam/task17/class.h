#ifndef CLASS_H
#define CLASS_H
using namespace std;

class ThreeNumbers {
protected:
    double a, b, c; // Три вещественных числа

public:
    // Конструктор
    ThreeNumbers(double a, double b, double c);

    // Геттеры для a, b, c
    double getA() const;
    double getB() const;
    double getC() const;
};

class TwoSets : public ThreeNumbers {
private:
    double x, y, z; // Дополнительные вещественные числа

public:
    // Конструктор
    TwoSets(double a, double b, double c, double x, double y, double z);

    // Метод для вычисления скалярного произведения двух наборов чисел
    double calculateDotProduct(const TwoSets& other) const;
};

#endif
