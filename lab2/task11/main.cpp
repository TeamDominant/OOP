#include "class.h"
#include <iostream>
using namespace std;

int main() {
    // Создаем экземпляр работника
    EnterpriseWorker worker(
        "Иван", "Иванов", "Иванович", 45, // Поля класса Person
        "Инженер", 50000.00, 85, 25       // Поля класса Worker
    );

    // Выводим информацию о работнике
    cout << "Информация о работнике предприятия:\n";
    worker.displayInfo();

    return 0;
}
