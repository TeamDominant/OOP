#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем два набора чисел
    TwoSets set1(1.0, 2.0, 3.0, 4.0, 5.0, 6.0);
    TwoSets set2(7.0, 8.0, 9.0, 10.0, 11.0, 12.0);

    // Вычисляем и выводим скалярное произведение
    cout << "Dot product of the two sets: " << set1.calculateDotProduct(set2) << endl;

    return 0;
}