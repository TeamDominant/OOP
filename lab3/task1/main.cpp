#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем точки
    Point p1(3, 4);        // Точка с координатами (3, 4)
    Point p2(6, 8);        // Точка с координатами (6, 8)

    // Вычисляем расстояние до начала координат
    cout << "Distance from p1 to origin: " << p1.Distance() << endl;

    // Вычисляем расстояние между двумя точками
    cout << "Distance from p1 to p2: " << p1.Distance(p2) << endl;

    return 0;
}