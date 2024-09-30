#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <iostream>
using namespace std;
class Employee {
public:
    void set_name(const string& e_name);
    string get_name() const;

    void set_last_name(const string& e_last_name);
    string get_last_name() const;

    void set_salary(const int e_salary[5]);
    float get_average_salary() const;

private:
    string name;
    string last_name;
    int salary[5];
    float average_salary;
};

class Admin : public Employee {
public:
    void set_department(const string& dept);
    string get_department() const;

private:
    string department;
};

#endif 