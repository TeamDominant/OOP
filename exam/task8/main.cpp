#include <iostream>
#include "class.h"
using namespace std;

int main() {
    TriangleChecker triangleChecker(12, 21, 12);
    if (triangleChecker.isTriangle()) {
        cout << "True." << endl;
    } else {
        cout << "False." << endl;
    }
    return 0;
}