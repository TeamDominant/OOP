#include "class.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru.UTF-8");

    /*-----------------------*/
    /* START: Class Worker   */
    /*-----------------------*/

    Worker worker;
    worker.set_name("John");
    worker.set_last_name("Brown");

    int salary[] = { 40000, 45000, 50000, 40000, 35000 };
    worker.set_salary(salary, 5);
    worker.set_worked_hours(160);
    worker.set_daily_rate(500);

    cout << "Имя: " << worker.get_name() << endl;
    cout << "Фамилия: " << worker.get_last_name() << endl;
    cout << "Зарплата по отработанным часам: " << worker.getSalary() << " рублей" << endl;
    cout << "Отработанные часы: " << worker.get_worked_hours() << " часов" << endl;

    return 0;
}
