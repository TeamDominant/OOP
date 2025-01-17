#include "class.h"


// Конструктор
Money::Money(int denomination, int count) : denomination(denomination), count(count) {}

// Геттеры
int Money::getDenomination() const {
    return denomination;
}

int Money::getCount() const {
    return count;
}

// Метод для вычисления общей суммы
int Money::calculateTotal() const {
    return denomination * count;
}

// Конструктор
Euro::Euro(int denomination, int count, double exchangeRate)
    : Money(denomination, count), exchangeRate(exchangeRate) {}

// Метод для вычисления стоимости в рублях
double Euro::calculateValueInRubles() const {
    return calculateTotal() * exchangeRate;
}
