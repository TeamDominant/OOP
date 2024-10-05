#include <iostream>
#include "class.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Работа с классом Employee
    Employee employee;
    employee.set_name("Петр");
    employee.set_last_name("Петров");
    int salary[] = { 40000, 30000, 50000, 10000, 35000 };
    employee.set_salary(salary);

    cout << "Имя: " << employee.get_name() << endl;
    cout << "Фамилия: " << employee.get_last_name() << endl;
    cout << "Средняя зарплата: " << employee.get_average_salary() << " рублей" << endl;

    // Работа с классом Manager (наследник Employee)
    Manager manager;
    manager.set_name("Алексей");
    manager.set_last_name("Смирнов");
    manager.set_salary(salary);
    manager.set_department("Отдел продаж");

    cout << "Имя менеджера: " << manager.get_name() << endl;
    cout << "Фамилия менеджера: " << manager.get_last_name() << endl;
    cout << "Средняя зарплата менеджера: " << manager.get_average_salary() << " рублей" << endl;
    cout << "Отдел: " << manager.get_department() << endl;

    return 0;
}
