#include "class.h"
#include <numeric>
#include <iostream>

using namespace std;

Employee::Employee() : average_salary(0) {
    for (int& sal : salary) {
        sal = 0;
    }
}

void Employee::set_name(const string& e_name) {
    name = e_name;
}

string Employee::get_name() const {
    return name;
}

void Employee::set_last_name(const string& e_last_name) {
    last_name = e_last_name;
}

string Employee::get_last_name() const {
    return last_name;
}

void Employee::set_salary(const int e_salary[5]) {
    float sum = 0;
    for (int i = 0; i < 5; ++i) {
        salary[i] = e_salary[i];
        sum += e_salary[i];
    }
    average_salary = sum / 5.0;
}

float Employee::get_average_salary() const {
    return average_salary;
}

// Реализация методов класса Manager
Manager::Manager() : department("") {}

void Manager::set_department(const string& e_department) {
    department = e_department;
}

string Manager::get_department() const {
    return department;
}
