<<<<<<< HEAD
#include "class.h"
#include <iostream>
#include <cmath> // несите крест

using namespace std;

/*----------------------------*/
/*  START: Class Calculator   */
/*----------------------------*/

ResistanceCalculator::ResistanceCalculator() : side(0), height(0) {}

ResistanceCalculator::ResistanceCalculator(float s, float h) : side(s), height(h) {}

ResistanceCalculator::~ResistanceCalculator() {}

void ResistanceCalculator::set_side(float s) {
    side = s;
}

void ResistanceCalculator::set_height(float h) {
    height = h;
}

bool ResistanceCalculator::is_valid_triangle() {
    if (side <= 0 || height <= 0) {
        cout << "Некорректные значения: стороны и высота должны быть положительными." << endl;
        return false;
    }

    float base = 2 * sqrt(side * side - (height * height));

    if (side >= base + side || base >= 2 * side) {
        cout << "Треугольник с такими сторонами не существует." << endl;
        return false;
    }

    return true;
}

float ResistanceCalculator::calculate_area() {
    return 0.5 * side * height;
}
=======
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
>>>>>>> b8ecab86dfe238ebad504ce11790db3e0805a21c
