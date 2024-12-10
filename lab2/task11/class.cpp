#include "class.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Реализация класса Person
Person::Person(const string& firstName, const string& lastName, const string& patronymic, int age)
    : firstName(firstName), lastName(lastName), patronymic(patronymic), age(age) {}

void Person::displayInfo() const {
    cout << "Имя: " << firstName << "\nФамилия: " << lastName << "\nОтчество: " << patronymic << "\nВозраст: " << age << " лет\n";
}

// Реализация класса Worker
Worker::Worker(const string& position, double salary, int rating, int experience) : position(position), salary(salary), rating(rating), experience(experience) {}

void Worker::displayInfo() const {
    cout << "Должность: " << position << "\nОклад: " << fixed << setprecision(2) << salary << "\nРейтинг: " << rating << "\nСтаж: " << experience << " лет\n";
}

// Реализация класса EnterpriseWorker
EnterpriseWorker::EnterpriseWorker(const string& firstName, const string& lastName, const string& patronymic, int age, const string& position, double salary, int rating, int experience) : Person(firstName, lastName, patronymic, age), Worker(position, salary, rating, experience) {}

double EnterpriseWorker::calculateSalary() const {
    double finalSalary = salary;

    // Увеличение оклада на основе рейтинга
    if (rating >= 60 && rating < 75) {
        finalSalary *= 1.2;
    } else if (rating >= 75 && rating < 90) {
        finalSalary *= 1.4;
    } else if (rating >= 90 && rating <= 100) {
        finalSalary *= 1.6;
    }

    // Увеличение на основе стажа
    if (experience > 20) {
        finalSalary *= 1.1;
    }

    return finalSalary;
}

void EnterpriseWorker::displayInfo() const {
    Person::displayInfo();
    Worker::displayInfo();
    cout << "Итоговая заработная плата: " << fixed << setprecision(2) << calculateSalary() << "\n";
}
