#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Worker {
public:
    Worker();
    ~Worker();

    void set_name(string e_name);
    string get_name();

    void set_last_name(string e_last_name);
    string get_last_name();

    void set_salary(int* e_salary, int size);
    float get_average_salary();

    void set_worked_hours(int hours);
    float get_worked_hours();
    
    void set_daily_rate(float rate);
    
    float getSalary();

protected:
    string name;
    string last_name;
    int* salary;
    int salary_size;
    float average_salary;
    int worked_hours;
    float daily_rate;
};

#endif // CLASS_H
