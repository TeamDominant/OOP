#include "class.h"

int main() {
    Money m1, m2;

    // Ввод данных для m1
    cout << "Введите Money данные (1):" << endl;
    cin >> m1;

    // Ввод данных для m2
    cout << "Введите Money данные (2):" << endl;
    cin >> m2;

    // Сложение
    Money sum = m1 + m2;
    cout << "Сложение: " << sum << endl;

    // Вычитание
    Money diff = m1 - m2;
    cout << "Вычитание: " << diff << endl;

    // Умножение на число
    double multiplier;
    cout << "На сколько умножаем?: ";
    cin >> multiplier;
    Money product = m1 * multiplier;
    cout << "Умножение: " << product << endl;

    // Деление на число
    double divisor;
    cout << "На сколько делим?: ";
    cin >> divisor;
    Money quotient = m1 / divisor;
    cout << "Деление: " << quotient << endl;

    // Деление одной суммы на другую
    double ratio = m1 / m2;
    cout << "Деление суммы на другую: " << ratio << endl;

    return 0;
}
