#include "class.h"
#include <stdexcept>
using namespace std;

ResistanceCalculator::ResistanceCalculator(double r1, double r2, const string& connection_type) : r1(r1), r2(r2), connection_type(connection_type) {}

double ResistanceCalculator::calcResistance() const {
    if (connection_type == "posled") {
        return r1 + r2;
    } else if (connection_type == "parallel") {
        if (r1 == 0 || r2 == 0) {
            throw invalid_argument("Resistance cant be zero.");
        }
        return (r1 * r2) / (r1 + r2);
    } else { 
        throw invalid_argument("Unknown connection type. Use posled or parallel.");
    }
}