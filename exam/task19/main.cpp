#include "class.h"

int main() {
    ColoredPoint cp(2.5, 3.5, 255, 0, 0);

    // Вывод информации о точке
    cp.printInfo();

    // Перемещение точки
    cp.moveRight(1.5);
    cp.moveUp(2.0);

    // Изменение цвета
    cp.setColor(0, 255, 0);

    // Вывод обновленной информации
    cp.printInfo();

    return 0;
}