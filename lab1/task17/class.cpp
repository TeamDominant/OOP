#include "class.h"

// Конструктор
Money::Money(int rub, int kop) : rubles(rub), kopecks(kop) {
    normalize();
}

// Нормализация значений
void Money::normalize() {
    if (kopecks >= 100) {
        rubles += kopecks / 100;
        kopecks %= 100;
    } else if (kopecks < 0) {
        rubles -= (abs(kopecks) / 100 + 1);
        kopecks = 100 - (abs(kopecks) % 100);
        if (kopecks == 100) {
            kopecks = 0;
            rubles += 1;
        }
    }
}

// Получение значения рублей
int Money::getRubles() const {
    return rubles;
}

// Получение значения копеек
int Money::getKopecks() const {
    return kopecks;
}

// сложение
Money Money::operator+(const Money& other) const {
    return Money(rubles + other.rubles, kopecks + other.kopecks);
}

// вычитание
Money Money::operator-(const Money& other) const {
    int total1 = rubles * 100 + kopecks;
    int total2 = other.rubles * 100 + other.kopecks;
    if (total1 < total2) {
        cout << "[ERROR] Результат отрицательный" << endl;
        return Money(0, 0); // Возврат нулевой суммы в случае ошибки
    }
    int result_total = total1 - total2;
    return Money(result_total / 100, result_total % 100);
}

// умножение
Money Money::operator*(double multiplier) const {
    int total = rubles * 100 + kopecks;
    int result_total = static_cast<int>(round(total * multiplier));
    return Money(result_total / 100, result_total % 100);
}

// деление на число
Money Money::operator/(double divisor) const {
    if (divisor == 0) {
        cout << "[ERROR] Деление на ноль" << endl;
        return Money(0, 0); // Возврат нулевой суммы в случае ошибки
    }
    int total = rubles * 100 + kopecks;
    int result_total = static_cast<int>(round(total / divisor));
    return Money(result_total / 100, result_total % 100);
}

// деление двух сумм
double Money::operator/(const Money& other) const {
    int total1 = rubles * 100 + kopecks;
    int total2 = other.rubles * 100 + other.kopecks;
    if (total2 == 0) {
        cout << "[ERROR] Деление на ноль" << endl;
        return 0.0; // Возврат нуля в случае ошибки
    }
    return static_cast<double>(total1) / total2;
}

// output
ostream& operator<<(ostream& os, const Money& money) {
    os << money.rubles << " рублей и " << money.kopecks << " копеек";
    return os;
}

// input (ne input lag)
istream& operator>>(istream& is, Money& money) {
    cout << "Введите рубли: ";
    is >> money.rubles;
    cout << "Введите копейки: ";
    is >> money.kopecks;
    money.normalize(); // Нормализация после ввода
    return is;
}
