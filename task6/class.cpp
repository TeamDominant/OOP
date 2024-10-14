#include "class.h"
#include <iostream>
#include <cmath>

using namespace std;

Employee::Employee() : salary(nullptr), salary_size(0), average_salary(0.0) {}

Employee::~Employee() {
    delete[] salary;
}

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
        delete[] salary;
    }
    salary_size = size;
    salary = new int[salary_size];
    float sum = 0;
    for (int i = 0; i < salary_size; i++) {
        salary[i] = e_salary[i];
        sum += e_salary[i];
    }
    average_salary = sum / salary_size;
}

float Employee::get_average_salary() {
    return average_salary;
}

// Operator overloading: adding two Employee average salaries
float Employee::operator+(const Employee& other) const {
    return this->average_salary + other.average_salary;
}

/*-----------------------*/
/* START: SysAdmin Class */
/*-----------------------*/

SysAdmin::SysAdmin() : num_servers(0) {}

SysAdmin::~SysAdmin() {}

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

// перегрузка оператора: вывод сис админа (списал)
ostream& operator<<(ostream& os, const SysAdmin& sysAdmin) {
    os << "SysAdmin Name: " << sysAdmin.name << "\n"
       << "Last Name: " << sysAdmin.last_name << "\n"
       << "Number of Servers: " << sysAdmin.num_servers << "\n"
       << "Technologies: ";
    for (const auto& tech : sysAdmin.technologies) {
        os << tech << " ";
    }
    return os;
}

/*-----------------------*/
/*  END: SysAdmin Class  */
/*-----------------------*/

/*------------------------*/
/*  START: Founder Class  */
/*------------------------*/

Founder::Founder() : company_name("") {}

Founder::~Founder() {}

void Founder::set_company_name(const string& c_name) {
    company_name = c_name;
}

string Founder::get_company_name() const {
    return company_name;
}

// перегрузка оператора: сравнение двух компаний типо
bool Founder::operator==(const Founder& other) const {
    return this->company_name == other.company_name;
}

/*-----------------------*/
/*  END: Founder Class  */
/*-----------------------*/
