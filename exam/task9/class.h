#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class ResistanceCalculator {
    private:
    double r1;
    double r2;
    string connection_type;

    public:
    ResistanceCalculator(double r1, double r2, const string& connection_type);
    double calcResistance() const;
};

#endif