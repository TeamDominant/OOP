#ifndef CLASS_H
#define CLASS_H

class Money {
protected:
    int denomination; // Номинал купюры
    int count;        // Число купюр

public:
    // Конструктор
    Money(int denomination, int count);

    // Геттеры
    int getDenomination() const;
    int getCount() const;

    // Метод для вычисления общей суммы
    int calculateTotal() const;
};

class Euro : public Money {
private:
    double exchangeRate; // Стоимость одного евро в рублях

public:
    // Конструктор
    Euro(int denomination, int count, double exchangeRate);

    // Метод для вычисления стоимости в рублях
    double calculateValueInRubles() const;
};

#endif
