#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем объект металлического бруса
    MetalBar bar(2.0, 3.0, 4.0, 7.85); // длины сторон 2, 3, 4, удельный вес 7.85 (сталь)

    // Выводим объем и массу
    cout << "Volume of the bar: " << bar.calculateVolume() << " cubic units" << endl;
    cout << "Mass of the bar: " << bar.calculateMass() << " units of mass" << endl;

    return 0;
}