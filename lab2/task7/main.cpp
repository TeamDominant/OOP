#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем объект производного класса TwoSets
    TwoSets numbers(7.0, 8.0, 9.0, 1.0, 2.0, 3.0);

    // Вывод первого набора чисел
    cout << "Первый набор чисел: (" 
         << numbers.getA() << ", " << numbers.getB() << ", " << numbers.getC() << ")" << endl;

    // Вывод второго набора чисел
    cout << "Второй набор чисел: ("
         << numbers.getX() << ", " << numbers.getY() << ", " << numbers.getZ() << ")" << endl;

    // Вычисление и вывод скалярного произведения
    cout << "Скалярное произведение двух наборов: " << numbers.scalarProduct() << endl;

    // Изменение значений первого и второго набора чисел
    numbers.setA(7.0);
    numbers.setB(8.0);
    numbers.setC(9.0);
    numbers.setX(1.0);
    numbers.setY(2.0);
    numbers.setZ(3.0);

    // Повторный вывод после изменения
    cout << "\nПосле изменения чисел:" << endl;
    cout << "Первый набор чисел: (" 
         << numbers.getA() << ", " << numbers.getB() << ", " << numbers.getC() << ")" << endl;

    cout << "Второй набор чисел: ("
         << numbers.getX() << ", " << numbers.getY() << ", " << numbers.getZ() << ")" << endl;

    cout << "Скалярное произведение двух наборов: " << numbers.scalarProduct() << endl;

    return 0;
}

