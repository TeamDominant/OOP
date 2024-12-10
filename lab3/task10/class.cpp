#include "class.h"
#include <iostream>

// Конструкторы
Money::Money() : rubles(0), kopecks(0) {}

Money::Money(int rub, int kop) : rubles(rub), kopecks(kop) {
    Normalize();
}

// Метод для нормализации копеек (если их больше 99 или меньше 0)
void Money::Normalize() {
    if (kopecks >= 100) {
        rubles += kopecks / 100;
        kopecks %= 100;
    } else if (kopecks < 0) {
        int deficit = (-kopecks + 99) / 100;
        rubles -= deficit;
        kopecks += deficit * 100;
    }
}

// Перегрузка оператора >
bool Money::operator>(const Money& other) const {
    if (rubles > other.rubles) {
        return true;
    }
    if (rubles == other.rubles && kopecks > other.kopecks) {
        return true;
    }
    return false;
}

// Перегрузка оператора <
bool Money::operator<(const Money& other) const {
    if (rubles < other.rubles) {
        return true;
    }
    if (rubles == other.rubles && kopecks < other.kopecks) {
        return true;
    }
    return false;
}

// Перегрузка оператора == (дружественная функция)
bool operator==(const Money& m1, const Money& m2) {
    return m1.rubles == m2.rubles && m1.kopecks == m2.kopecks;
}

// Метод для отображения
void Money::Display() const {
    cout << rubles << " руб. " << kopecks << " коп.";
}