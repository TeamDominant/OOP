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

    // перегрузка оператора: добавление двух зарплат для работников
    float operator+(const Employee& other) const;

protected:
    string name;
    string last_name;
    int* salary;
    int salary_size;
    float average_salary;
};

class SysAdmin : public Employee {
public:
    SysAdmin();
    ~SysAdmin();

    void set_num_servers(int num);
    int get_num_servers();

    void add_technology(const string& tech);
    vector<string> get_technologies();

    // перегрузка оператора: вывод сис админа (списал)
    friend ostream& operator<<(ostream& os, const SysAdmin& sysAdmin);

private:
    int num_servers;
    vector<string> technologies;
};

class Founder : public SysAdmin {
public:
    Founder();
    ~Founder();

    void set_company_name(const string& c_name);
    string get_company_name() const;

    // перегрузка оператора: сравнение двух компаний типо
    bool operator==(const Founder& other) const;

private:
    string company_name;
};

#endif // CLASS_H
