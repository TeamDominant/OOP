#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем отрезок с координатами (1, 2) и (4, 6)
    Segment segment(1, 2, 4, 6);

    // Вычисляем и выводим длину отрезка
    cout << "Length of the segment: " << segment.calculateLength() << endl;

    return 0;
}
