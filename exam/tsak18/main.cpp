#include <iostream>
#include "class.h"
using namespace std;

int main() {
    double x1 = 0.0, y1 = 0.0, x2 = 3.0, y2 = 4.0;
    double a = 2.0, b = 5.0;

    TwoVectors vectors(x1, y1, x2, y2, a, b);

    cout << "Длина первого вектора: " << vectors.length() << endl;
    cout << "Площадь параллелограмма: " << vectors.calculateArea() << endl;

    return 0;
}