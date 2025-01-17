#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем объект класса Euro
    Euro euro(50, 10, 85.5); // 10 купюр номиналом 50 евро, стоимость одного евро - 85.5 рублей

    // Выводим стоимость в рублях
    cout << "Total value in rubles: " << euro.calculateValueInRubles() << " RUB" << endl;

    return 0;
}
