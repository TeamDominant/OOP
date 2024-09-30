#include <iostream>
#include "class.h"
#include <string>

using namespace std;

void Employee::set_name(const string& e_name) {
    Employee::name = e_name;
}

string Employee::get_name() const {
    return Employee::name;
}

void Employee::set_last_name(const string& e_last_name) {
    Employee::last_name = e_last_name;
}

string Employee::get_last_name() const {
    return Employee::last_name;
}

void Employee::set_salary(const int e_salary[5]) {
    float Employee::sum = 0;
    for (int i = 0; i < 5; i++) {
        Employee::sum += e_salary[i];
        Employee::salary[i] = e_salary[i];
    }
    Employee::average_salary = sum / 5.0;
}

float Employee::get_average_salary() const {
    return Employee::average_salary;
}

void Admin::set_department(const string& dept) {
    Employee::department = dept;
}

string Admin::get_department() const {
    return Employee::department;
}