#ifndef CLASS_H
#define CLASS_H
using namespace std;

class Tariff {
protected:
    double callRate;   // Стоимость минуты звонка
    double smsRate;    // Стоимость отправки СМС

public:
    // Конструктор
    Tariff(double callRate, double smsRate);

    // Геттеры для тарифов
    double getCallRate() const;
    double getSmsRate() const;
};

class Phone : public Tariff {
private:
    double balance; // Баланс телефона

public:
    // Конструктор
    Phone(double callRate, double smsRate, double balance);

    // Метод для совершения звонка
    void makeCall(int minutes);

    // Метод для отправки СМС
    void sendSMS(int smsCount);

    // Геттер для текущего баланса
    double getBalance() const;
};

#endif