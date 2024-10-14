#include "class.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru.UTF-8");

    Employee employee;
    employee.set_name("Иван");
    employee.set_last_name("Колесников");

    int salary[] = { 40000, 30000, 50000, 10000, 35000 };
    employee.set_salary(salary, 5);

    SysAdmin sysAdmin;
    sysAdmin.set_name("Pasha");
    sysAdmin.set_last_name("Choo");
    sysAdmin.set_salary(salary, 5);
    sysAdmin.set_num_servers(2);
    sysAdmin.add_technology("Portainer");
    sysAdmin.add_technology("Docker");

    Founder founder;
    founder.set_name("John");
    founder.set_last_name("Leaf");
    founder.set_salary(salary, 5);
    founder.set_num_servers(10);
    founder.add_technology("Unraid");
    founder.set_company_name("Amdcloud");

    cout << sysAdmin;  // использование перегруженного оператора

    if (founder.get_company_name() == "Amdcloud") {
        cout << "\nFounder of https://amdcloud.kz/!" << endl;
    }

    // перегрузка оператора работника
    cout << "Объединенные зарплаты для работник и сис админа: " << employee + sysAdmin << endl;

    return 0;
}
