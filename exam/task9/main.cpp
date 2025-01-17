#include <iostream>
#include "class.h"
using namespace std;

int main() {
    string connection_type;

    cout << "Which type? (posled / parallel)" << endl;
    cin >> connection_type;

    ResistanceCalculator resistanceCalculator(5, 10, connection_type);
    
    cout << "Selected type: " << connection_type << endl;
    cout << "Result: " << resistanceCalculator.calcResistance() << endl;
    return 0;
}