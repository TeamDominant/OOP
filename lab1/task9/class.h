<<<<<<< HEAD
#ifndef CLASS_H
#define CLASS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*----------------------------*/
/*  START: Class Calculator   */
/*----------------------------*/
class ResistanceCalculator {
public:
    ResistanceCalculator();
    ResistanceCalculator(float, float);
    ~ResistanceCalculator();
private:
    float side;
    float height;
};

#endif // CLASS_H
=======
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
>>>>>>> b8ecab86dfe238ebad504ce11790db3e0805a21c
