#include "class.h"

// Конструктор
Human::Human(const string& firstName, const string& lastName, const string& middleName)
    : firstName(firstName), lastName(lastName), middleName(middleName) {}

// Метод получения полного имени
string Human::getFullName() const {
    return lastName + " " + firstName + " " + middleName;
}

// Конструктор
Student::Student(const string& firstName, const string& lastName, const string& middleName, int subjectsCount, int gradesSum)
    : Human(firstName, lastName, middleName), subjectsCount(subjectsCount), gradesSum(gradesSum) {}

// Метод вычисления средней оценки
double Student::calculateAverageGrade() const {
    if (subjectsCount == 0) {
        return 0; // Избегаем деления на ноль
    }
    return gradesSum / subjectsCount;
}