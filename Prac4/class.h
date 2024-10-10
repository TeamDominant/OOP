#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
    Employee();
    ~Employee();

    void set_name(string e_name);
    string get_name();

    void set_last_name(string e_last_name);
    string get_last_name();

    void set_salary(int* e_salary, int size);
    float get_average_salary();

protected:
    string name;
    string last_name;
    int* salary;
    int salary_size;
    float average_salary;
};

/* Добавление Сис. Админа в работников*/
class SysAdmin : public Employee {
public:
    SysAdmin();
    ~SysAdmin();

    void set_num_servers(int num);
    int get_num_servers();

    void add_technology(const string& tech);
    vector<string> get_technologies();

private:
    int num_servers;              // кол-во серверов
    vector<string> technologies;  // список сервисов-технологий на сервере
};

#endif // CLASS_H