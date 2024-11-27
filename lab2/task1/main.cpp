#include <iostream>

using namespace std;

#include "class.h"

int main() {
    // Создаем объект базового класса Money
    Money rubles(100, 10); // 10 купюр по 100 рублей
    cout << "Общая сумма в рублях: " << rubles.totalAmount() << " руб.\n";

    // Создаем объект производного класса Euro
    Euro euros(50, 20, 85.5); // 20 купюр по 50 евро, курс 85.5 руб/евро
    cout << "Общая сумма в евро: " << euros.totalAmount() << " евро.\n";
    cout << "Общая стоимость в рублях: " << euros.totalInRubles() << " руб.\n";

    return 0;
};
