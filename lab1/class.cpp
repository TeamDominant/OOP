#include "class.h"
#include <iostream>
#include <cmath>

using namespace std;

/*-----------------------*/
/* START: Class worker */
/*-----------------------*/

Worker::Worker() : salary(nullptr), salary_size(0), average_salary(0.0), worked_hours(0), daily_rate(0.0) {}

Worker::~Worker() {
    delete[] salary;
}

void Worker::set_name(string e_name) {
    name = e_name;
}

string Worker::get_name() {
    return name;
}

void Worker::set_last_name(string e_last_name) {
    last_name = e_last_name;
}

string Worker::get_last_name() {
    return last_name;
}

void Worker::set_salary(int* e_salary, int size) {
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

float Worker::get_average_salary() {
    return average_salary;
}

void Worker::set_worked_hours(int hours) {
    worked_hours = hours;
}

float Worker::get_worked_hours() {
    return worked_hours;
}

void Worker::set_daily_rate(float rate) {
    daily_rate = rate;
}

float Worker::getSalary() {
    return worked_hours * daily_rate;
}


/*-----------------------*/
/*  END: Class Worker  */
/*-----------------------*/
