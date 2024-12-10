#ifndef CLASS_H
#define CLASS_H

#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    string patronymic;
    int age;

public:
    Person(const string& firstName, const string& lastName, const string& patronymic, int age);
    virtual ~Person() {}
    virtual void displayInfo() const;
};

class Worker {
protected:
    string position;
    double salary;
    int rating; // от 0 до 100
    int experience; // стаж работы в годах

public:
    Worker(const string& position, double salary, int rating, int experience);
    virtual ~Worker() {}
    virtual void displayInfo() const;
};

class EnterpriseWorker : public Person, public Worker {
public:
    EnterpriseWorker(const string& firstName, const string& lastName, const string& patronymic, int age, const string& position, double salary, int rating, int experience);

    double calculateSalary() const; // метод расчета итоговой заработной платы
    void displayInfo() const override; // вывод полной информации о работнике
};

#endif // CLASS_H
