// main.cpp
#include "class.h"
#include <iostream>

using namespace std;

int main() {
    Date date1(18, 4, 2005);
    cout << "Дата (дд.мм.гггг): ";
    date1.printDate();

    Date date2(20050418);
    cout << "Дата (ггггммдд): ";
    date2.printDate();

    date1.setDay(15);
    date1.setMonth(3);
    date1.setYear(2013);
    cout << "Измененная дата: ";
    date1.printDate();

    date1.addDays(20);
    cout << "Дата после добавления 20 дней: ";
    date1.printDate();

    return 0;
}
