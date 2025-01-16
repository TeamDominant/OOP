#ifndef CLASS_H
#define CLASS_H

using namespace std;

class Money {
    private:
    int nominal;
    int amount;

    public:
    Money(int nominalm, int amount); // конструктор

    int summa() const; // метод вычисления суммы

    int getNominal() const; // Getter
    int getAmount() const; // Getter
};

#endif