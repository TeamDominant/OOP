// class.cpp

#include "class.h"
#include <stdexcept>

using namespace std;

ResistanceCalculator::ResistanceCalculator(double r1, double r2, const string& type) : resistor1(r1), resistor2(r2), connection_type(type) {}

double ResistanceCalculator::calculateResistance() const {
    if (connection_type == "последовательно") {
        // сопротивления складываются
        return resistor1 + resistor2;
    } else if (connection_type == "параллельно") {
        // формула: R = (R1 * R2) / (R1 + R2)
        if (resistor1 == 0 || resistor2 == 0) {
            throw invalid_argument("Сопротивление не может быть нулевым при параллельном соединении.");
        }
        return (resistor1 * resistor2) / (resistor1 + resistor2);
    } else {
        throw invalid_argument("Неверный тип соединения. Используйте 'последовательно' или 'параллельно'.");
    }
}
