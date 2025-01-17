#include "class.h"

int main() {
    // Инициализация объекта Gift
    Gift gift(30.0, 20.0, 10.0, "Red", 0.05);

    // Вывод информации о подарке
    gift.printInfo();

    return 0;
}