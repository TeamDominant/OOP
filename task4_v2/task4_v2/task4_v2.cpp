#include "class.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru.UTF-8");

    /*-----------------------*/
    /* START: Class Employee */
    /*-----------------------*/

    Employee employee;
    employee.set_name("Иван");
    employee.set_last_name("Колесников"); // я не мог

    int salary[] = { 40000, 30000, 50000, 10000, 35000 };
    employee.set_salary(salary, 5);

    cout << "Имя: " << employee.get_name() << endl;
    cout << "Фамилия: " << employee.get_last_name() << endl;
    cout << "Средняя зарплата: " << employee.get_average_salary() << " рублей" << endl;

    /*-----------------------*/
    /* START: Class SysAdmin */
    /*-----------------------*/
    SysAdmin sysAdmin;
    sysAdmin.set_name("Павел");
    sysAdmin.set_last_name("Pashachoo"); // я не знаю фамилию друга :)
    sysAdmin.set_salary(salary, 5);
    sysAdmin.set_num_servers(2);
    sysAdmin.add_technology("Portainer");   // мои два
    sysAdmin.add_technology("Docker");  // любимца

    cout << "Имя системного администратора: " << sysAdmin.get_name() << endl;
    cout << "Фамилия системного администратора: " << sysAdmin.get_last_name() << endl;
    cout << "Средняя зарплата системного администратора: " << sysAdmin.get_average_salary() << " рублей" << endl;
    cout << "Количество серверов: " << sysAdmin.get_num_servers() << endl;

    cout << "Технологии, используемые системным администратором: ";
    for (const auto& tech : sysAdmin.get_technologies()) {
        cout << tech << " ";
    }
    cout << endl;

    /*------------------------*/
    /* START: Class Trapezoid */
    /*------------------------*/
    Trapezoid trapezoid(5, 7, 4, 4.5); // задаём 4 стороны
    cout << "Периметр: " << trapezoid.calculate_perimeter() << endl;
    cout << "Высота: " << trapezoid.calculate_height() << endl;
    cout << "Площадь: " << trapezoid.calculate_area() << endl;

    cout << "Угол между боковой стороной и основанием: " << trapezoid.calculate_angle(trapezoid.get_base1(), trapezoid.get_side1(), trapezoid.get_side2()) << " градусов" << endl;
    
    return 0;
}
