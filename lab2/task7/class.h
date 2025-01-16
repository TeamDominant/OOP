#ifndef CLASS_H
#define CLASS_H

// Базовый класс для хранения трех вещественных чисел
class ThreeNumbers {
protected:
    double a, b, c; // Поля для первого набора чисел
public:
    // Конструктор для инициализации полей
    ThreeNumbers(double a_val, double b_val, double c_val);

    // Геттеры
    double getA() const;
    double getB() const;
    double getC() const;

    // Сеттеры
    void setA(double a_val);
    void setB(double b_val);
    void setC(double c_val);

    virtual ~ThreeNumbers() = default; // Виртуальный деструктор
};

// Производный класс, который добавляет второй набор чисел
class TwoSets : public ThreeNumbers {
private:
    double x, y, z; // Поля для второго набора чисел
public:
    // Конструктор с параметрами
    TwoSets(double a_val, double b_val, double c_val, double x_val, double y_val, double z_val);

    // Метод для вычисления скалярного произведения
    double scalarProduct() const;

    // Геттеры для второго набора чисел
    double getX() const;
    double getY() const;
    double getZ() const;

    // Сеттеры для второго набора чисел
    void setX(double x_val);
    void setY(double y_val);
    void setZ(double z_val);
};

#endif // CLASS_H

