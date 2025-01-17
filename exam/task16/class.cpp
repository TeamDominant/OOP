#include "class.h"
#include <iostream>
using namespace std;

// Конструктор
Tariff::Tariff(double callRate, double smsRate)
    : callRate(callRate), smsRate(smsRate) {}

// Геттер для стоимости звонка
double Tariff::getCallRate() const {
    return callRate;
}

// Геттер для стоимости СМС
double Tariff::getSmsRate() const {
    return smsRate;
}

// Конструктор
Phone::Phone(double callRate, double smsRate, double balance)
    : Tariff(callRate, smsRate), balance(balance) {}

// Метод для совершения звонка
void Phone::makeCall(int minutes) {
    double cost = minutes * getCallRate();
    if (cost > balance) {
        cout << "Error: Insufficient balance for a " << minutes << "-minute call." << endl;
    } else {
        balance -= cost;
        cout << "Call made for " << minutes << " minutes. Cost: " << cost << " RUB." << endl;
    }
}

// Метод для отправки СМС
void Phone::sendSMS(int smsCount) {
    double cost = smsCount * getSmsRate();
    if (cost > balance) {
        cout << "Error: Insufficient balance to send " << smsCount << " SMS." << endl;
    } else {
        balance -= cost;
        cout << smsCount << " SMS sent. Cost: " << cost << " RUB." << endl;
    }
}

// Геттер для текущего баланса
double Phone::getBalance() const {
    return balance;
}