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