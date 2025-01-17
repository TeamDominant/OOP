#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class Human {
protected:
    string firstName;  // Имя
    string lastName;   // Фамилия
    string middleName; // Отчество

public:
    // Конструктор
    Human(const string& firstName, const string& lastName, const string& middleName);

    // Геттер полного имени
    string getFullName() const;
};

class Student : public Human {
private:
    int subjectsCount;    // Число дисциплин
    int gradesSum;        // Сумма оценок

public:
    // Конструктор
    Student(const string& firstName, const string& lastName, const string& middleName, int subjectsCount, int gradesSum);

    // Метод вычисления средней оценки
    double calculateAverageGrade() const;
};

#endif