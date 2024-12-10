#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <cmath>

using namespace std;

class Money {
private:
    int rubles;
    int kopecks;

    void normalize(); // используем приватный метод нормализации

public:
    Money(int rub = 0, int kop = 0); // конструктор

    int getRubles() const; // геттер для рублей
    int getKopecks() const; // геттер для копеек

    Money operator+(const Money& other) const; // сложение
    Money operator-(const Money& other) const; // вычитание
    Money operator*(double multiplier) const;  // умножение
    Money operator/(double divisor) const;     // деление на число
    double operator/(const Money& other) const; // деление двух сумм

    friend ostream& operator<<(ostream& os, const Money& money); // output
    friend istream& operator>>(istream& is, Money& money);       // input
};

#endif // CLASS_H
