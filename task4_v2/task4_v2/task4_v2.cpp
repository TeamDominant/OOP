#include <iostream>
#include "class.h"
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Создание объекта класса Employee
    Employee employee;
    employee.set_name("Петр");
    employee.set_last_name("Петров");

    int salary[] = { 40000, 30000, 50000, 10000, 35000 };
    employee.set_salary(salary);

    cout << "Name: " << employee.get_name() << endl;
    cout << "Last name: " << employee.get_last_name() << endl;
    cout << "Средняя зарплата: " << employee.get_average_salary() << " рублей" << endl;

    // Создание объекта класса Admin
    Admin admin;
    admin.set_name("Вадим");
    admin.set_last_name("Абдуллаев");
    admin.set_salary(salary);
    admin.set_department("Отдел кибер-спорта");

    cout << "Admin's Name: " << admin.get_name() << endl;
    cout << "Admin's Last name: " << admin.get_last_name() << endl;
    cout << "Average Admin Salary: " << admin.get_average_salary() << " рублей" << endl;
    cout << "Department: " << admin.get_department() << endl;

    return 0;
}