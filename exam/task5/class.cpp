#include <stdexcept>
#include "class.h"

Money::Money(int nominal, int amount) : nominal(nominal), amount(amount) {
    if (nominal != 1 && nominal != 2 && nominal != 5 && nominal != 10 && nominal != 50 && nominal != 100 && nominal != 500) {
        throw invalid_argument("Неверное значение.");
    }
    if (amount < 0) {
        throw invalid_argument("Неверное значение.");
    }
}

int Money::summa() const {
    return nominal * amount;
}

int Money::getNominal() const {
    return nominal;
}

int Money::getAmount() const {
    return amount;
}