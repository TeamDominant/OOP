#ifndef RESISTANCE_CALCULATOR_H
#define RESISTANCE_CALCULATOR_H

#include <string>

using namespace std;

class ResistanceCalculator {
private:
    double resistor1;
    double resistor2;
    string connection_type;

public:
    ResistanceCalculator(double r1, double r2, const string& type);

    double calculateResistance() const;
};

#endif
