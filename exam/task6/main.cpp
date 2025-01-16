#include <iostream>
#include "class.h"
using namespace std;

int main() {
    Trapecia trapecia(10, 5, 5);
    cout << "Area: " << trapecia.getArea() << endl;
    cout << "Perimeter: " << trapecia.getPerimeter() << endl;
    return 0;
}