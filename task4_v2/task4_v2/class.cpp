#include "class.h"
#include <iostream>
#include <cmath> // несите крест

using namespace std;

/*-----------------------*/
/* START: Class Employee */
/*-----------------------*/

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

/*-----------------------*/
/*  END: Class Employee  */
/*-----------------------*/

/*-----------------------*/
/* START: Class SysAdmin */
/*-----------------------*/

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

/*-----------------------*/
/*  END: Class SysAdmin  */
/*-----------------------*/

/*------------------------*/
/* START: Class Trapezoid */
/*------------------------*/

Trapezoid::Trapezoid() : base1(0), base2(0), side1(0), side2(0) {}
Trapezoid::Trapezoid(float b1, float b2, float s1, float s2) : base1(b1), base2(b2), side1(s1), side2(s2) {}
Trapezoid::~Trapezoid() {}

// сеттеры сторон
void Trapezoid::set_base1(float b1) {
    base1 = b1;
}

void Trapezoid::set_base2(float b2) {
    base2 = b2;
}

void Trapezoid::set_side1(float s1) {
    side1 = s1;
}

void Trapezoid::set_side2(float s2) {
    side2 = s2;
}

// геттеры
float Trapezoid::get_base1() {
    return base1;
}

float Trapezoid::get_base2() {
    return base2;
}

float Trapezoid::get_side1() {
    return side1;
}

float Trapezoid::get_side2() {
    return side2;
}

// периметр
float Trapezoid::calculate_perimeter() {
    return base1 + base2 + side1 + side2;
}

// высота
float Trapezoid::calculate_height() {
    if (base1 == base2) {
        cout << "Высота не может быть посчитана. Данных некорректны. Ошибка: string 135" << endl;  // не трапеция, если основания равны
    }
    float diff = (base1 - base2) / 2;
    return sqrt(side1 * side1 - diff * diff);
}

// площадь
float Trapezoid::calculate_area() {
    float height = calculate_height();
    return 0.5 * (base1 + base2) * height;
}

// угол
float Trapezoid::calculate_angle(float base, float side) {
    // Угол между основанием и боковой стороной
    float diff = (base1 - base2) / 2;
    return atan(diff / side) * 180.0 / M_PI;  // Используем арктангенс для расчёта угла
}

/*----------------------------*/
/*   START: Class Triangle    */
/*----------------------------*/

Triangle::Triangle() : side(0), height(0) {}

Triangle::Triangle(float s, float h) : side(s), height(h) {}

Triangle::~Triangle() {}

void Triangle::set_side(float s) {
    side = s;
}

void Triangle::set_height(float h) {
    height = h;
}

bool Triangle::is_valid_triangle() {
    if (side <= 0 || height <= 0) {
        cout << "Некорректные значения: стороны и высота должны быть положительными." << endl;
        return false;
    }

    float base = 2 * sqrt(side * side - (height * height));

    if (side >= base + side || base >= 2 * side) {
        cout << "Треугольник с такими сторонами не существует." << endl;
        return false;
    }

    return true;
}

float Triangle::calculate_area() {
    return 0.5 * side * height;
}