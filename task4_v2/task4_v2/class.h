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

protected:
    string name;
    string last_name;
    int* salary;
    int salary_size;
    float average_salary;
};

// Добавление Сис. Админа в работников
class SysAdmin : public Employee {
public:
    SysAdmin();
    ~SysAdmin();

    void set_num_servers(int num);
    int get_num_servers();

    void add_technology(const string& tech);
    vector<string> get_technologies();

private:
    int num_servers;              // кол-во серверов
    vector<string> technologies;  // список сервисов-технологий на сервере
};

// расчет трапеции
class Trapezoid {
public:
    Trapezoid();
    Trapezoid(float base1, float base2, float side1, float side2);
    ~Trapezoid();

    // сеттер значений сторон
    void set_base1(float b1);
    void set_base2(float b2);
    void set_side1(float s1);
    void set_side2(float s2);

    // геттер сторон
    float get_base1();
    float get_base2();
    float get_side1();
    float get_side2();

    // расчеты 
    float calculate_perimeter(); // говорит само за себя
    float calculate_height(); // высота
    float calculate_area(); // площадь
    float calculate_angle(float a, float b, float opposite); // угол

private:
    float base1; // основа
    float base2; // вторая основа
    float side1; // боковая сторона
    float side2; // вторая боковая
};

#endif // CLASS_H