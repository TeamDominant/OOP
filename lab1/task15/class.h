// Date.h
#ifndef DATE_H
#define DATE_H

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Конструктор с тремя аргументами
    Date(int d, int m, int y);

    // Конструктор с одним целым числом в формате ггггммдд
    Date(int yyyymmdd);

    // Методы получения значений
    int getDay() const;
    int getMonth() const;
    int getYear() const;

    // Методы установки значений
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    // Метод для вычисления новой даты через заданное число дней
    void addDays(int days);

    // Метод для отображения даты (для удобства)
    void printDate() const;
};

#endif // DATE_H
