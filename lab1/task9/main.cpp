#include <iostream>
#include "class.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "ru.UTF-8");
    try {
        double r1, r2;
        string connection_type;

        cout << "Введите сопротивление первого резистора: ";
        cin >> r1;
        cout << "Введите сопротивление второго резистора: ";
        cin >> r2;
        cout << "Введите тип соединения (последовательно/параллельно): ";
        cin >> connection_type;

        ResistanceCalculator calculator(r1, r2, connection_type);
        double result = calculator.calculateResistance();

        cout << "Общее сопротивление: " << result << " Ом" << endl;
    } catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
