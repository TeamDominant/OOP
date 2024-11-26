#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <cmath>

using namespace std;

class Money {
private:
    int rubles;
    int kopecks;

    void normalize(); // Приватный метод нормализации

public:
    Money(int rub = 0, int kop = 0); // Конструктор

    int getRubles() const; // Геттер для рублей
    int getKopecks() const; // Геттер для копеек

    Money operator+(const Money& other) const; // Оператор сложения
    Money operator-(const Money& other) const; // Оператор вычитания
    Money operator*(double multiplier) const;  // Оператор умножения
    Money operator/(double divisor) const;     // Оператор деления на число
    double operator/(const Money& other) const; // Оператор деления двух сумм

    friend ostream& operator<<(ostream& os, const Money& money); // Вывод
};

#endif // CLASS_H
