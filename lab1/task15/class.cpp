// Date.cpp
#include "class.h"
#include <iostream>

Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

Date::Date(int yyyymmdd) {
    year = yyyymmdd / 10000;
    month = (yyyymmdd / 100) % 100;
    day = yyyymmdd % 100;
}

int Date::getDay() const { return day; }
int Date::getMonth() const { return month; }
int Date::getYear() const { return year; }

void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11: return 30;
        case 2: return isLeapYear(year) ? 29 : 28;
        default: return 31;
    }
}

void Date::addDays(int days) {
    day += days;
    while (day > daysInMonth(month, year)) {
        day -= daysInMonth(month, year);
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    }
}

void Date::printDate() const {
    cout << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "") << month << "." << year << endl;
}
