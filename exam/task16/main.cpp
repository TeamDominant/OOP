#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем телефон с тарифом: 2 рубля за минуту звонка, 1 рубль за СМС, начальный баланс 50 рублей
    Phone phone(2.0, 1.0, 50.0);

    // Совершаем звонок на 10 минут
    phone.makeCall(10);

    // Отправляем 5 СМС
    phone.sendSMS(5);

    // Пытаемся совершить звонок на 30 минут
    phone.makeCall(30);

    // Печатаем текущий баланс
    cout << "Current balance: " << phone.getBalance() << " RUB" << endl;

    return 0;
}