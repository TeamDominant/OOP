#include <iostream>
#include "class.h"

using namespace std;

int main() {
    TriangleChecker triangleChecker(5.0, 15.0, 55.0);
    if (triangleChecker.isTriangle()) { 
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}