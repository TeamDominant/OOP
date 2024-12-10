#ifndef CLASS_H
#define CLASS_H

class Money {
protected:
    int denomination; // Номинал купюры
    int count;        // Число купюр
public:
    Money(int denom, int cnt); // Конструктор
    virtual ~Money() = default; // Виртуальный деструктор для правильного удаления производных объектов

    // Методы
    int getDenomination() const;
    int getCount() const;
    virtual int totalAmount() const; // Общая сумма денег
};

class Euro : public Money {
private:
    double exchangeRate; // Стоимость одного евро в рублях
public:
    Euro(int denom, int cnt, double rate); // Конструктор
    void setExchangeRate(double rate); // Установить курс
    double getExchangeRate() const;    // Получить курс
    double totalInRubles() const;      // Общая сумма в рублях
};

#endif // CLASS_H
