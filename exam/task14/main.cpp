#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем офисное помещение с 3 комнатами
    Office office(3, 0.2); // 3 комнаты, расход краски 0.2 литра на 1 м^2

    // Добавляем комнаты
    office.addRoom(Room(5, 4, 3)); // Длина 5, ширина 4, высота 3
    office.addRoom(Room(6, 3, 3)); // Длина 6, ширина 3, высота 3
    office.addRoom(Room(4, 4, 3)); // Длина 4, ширина 4, высота 3

    // Вычисляем и выводим необходимое количество краски
    cout << "Total paint required: " << office.calculatePaintNeeded() << " liters" << endl;

    return 0;
}
