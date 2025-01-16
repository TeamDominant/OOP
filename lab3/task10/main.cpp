#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем два объекта Money
    Money m1(5, 150);  // 5 руб. 150 коп. => нормализуется до 6 руб. 50 коп.
    Money m2(6, 50);   // 6 руб. 50 коп.

    // Вывод объектов
    cout << "Money 1: ";
    m1.Display();
    cout << endl;

    cout << "Money 2: ";
    m2.Display();
    cout << endl;

    // Сравнение объектов
    if (m1 > m2) {
        cout << "Money 1 is greater than Money 2." << endl;
    } else if (m1 < m2) {
        cout << "Money 1 is less than Money 2." << endl;
    } else if (m1 == m2) {
        cout << "Money 1 is equal to Money 2." << endl;
    }

    return 0;
}