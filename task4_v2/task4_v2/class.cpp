#include "class.h"
#include <iostream>

using namespace std;

// Реализация конструктора Employee
Employee::Employee() : salary(nullptr), salary_size(0), average_salary(0.0) {}

// Реализация деструктора Employee
Employee::~Employee() {
    delete[] salary; // Освобождаем память, выделенную для массива зарплат
}

// Методы для Employee
void Employee::set_name(string e_name) {
    name = e_name;
}

string Employee::get_name() {
    return name;
}

void Employee::set_last_name(string e_last_name) {
    last_name = e_last_name;
}

string Employee::get_last_name() {
    return last_name;
}

void Employee::set_salary(int* e_salary, int size) {
    if (salary != nullptr) {
        delete[] salary; // Освобождаем ранее выделенную память
    }
    salary_size = size;
    salary = new int[salary_size]; // Динамическое выделение памяти
    float sum = 0;
    for (int i = 0; i < salary_size; i++) {
        salary[i] = e_salary[i];
        sum += e_salary[i];
    }
    average_salary = sum / salary_size; // Средняя зарплата
}

float Employee::get_average_salary() {
    return average_salary;
}

// Реализация конструктора SysAdmin
SysAdmin::SysAdmin() : num_servers(0) {}

// Реализация деструктора SysAdmin
SysAdmin::~SysAdmin() {}

// Методы для SysAdmin
void SysAdmin::set_num_servers(int num) {
    num_servers = num;
}

int SysAdmin::get_num_servers() {
    return num_servers;
}

void SysAdmin::add_technology(const string& tech) {
    technologies.push_back(tech);
}

vector<string> SysAdmin::get_technologies() {
    return technologies;
}
