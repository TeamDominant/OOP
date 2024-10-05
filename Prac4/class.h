#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
    Employee();
    void set_name(const string& e_name);
    string get_name() const;

    void set_last_name(const string& e_last_name);
    string get_last_name() const;

    void set_salary(const int e_salary[5]);
    float get_average_salary() const;

protected:
    string name;
    string last_name;
    int salary[5];
    float average_salary;
};

class Manager : public Employee {
public:
    Manager();
    void set_department(const string& e_department);
    string get_department() const;

private:
    string department;
};

#endif  // CLASS_H