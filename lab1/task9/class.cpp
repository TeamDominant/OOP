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