#include "class.h"

// Реализация методов класса Money
Money::Money(int denom, int cnt) : denomination(denom), count(cnt) {}

int Money::getDenomination() const {
    return denomination;
}

int Money::getCount() const {
    return count;
}

int Money::totalAmount() const {
    return denomination * count;
}

// Реализация методов класса Euro
Euro::Euro(int denom, int cnt, double rate) : Money(denom, cnt), exchangeRate(rate) {}

void Euro::setExchangeRate(double rate) {
    exchangeRate = rate;
}

double Euro::getExchangeRate() const {
    return exchangeRate;
}

double Euro::totalInRubles() const {
    return totalAmount() * exchangeRate;
}
