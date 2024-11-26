#include "class.h"

int main() {
    Money m1(5, 150);  // 5 рублей и 150 копеек (нормализуется до 6 рублей 50 копеек)
    Money m2(2, 75);   // 2 рубля 75 копеек

    // Сложение
    Money sum = m1 + m2;
    cout << "Sum: " << sum << endl;

    // Вычитание
    Money diff = m1 - m2;
    cout << "Difference: " << diff << endl;

    // Умножение на число
    Money product = m1 * 2.5;
    cout << "Product: " << product << endl;

    // Деление на число
    Money quotient = m1 / 2.0;
    cout << "Quotient: " << quotient << endl;

    // Деление одной суммы на другую
    double ratio = m1 / m2;
    cout << "Ratio: " << ratio << endl;

    return 0;
}
