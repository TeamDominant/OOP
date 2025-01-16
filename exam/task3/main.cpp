#include <iostream>
#include "class.h"
using namespace std;

int main() {
    Triangle triangle(4, 6, 8);
    cout << "Perimeter Geron: " << triangle.perimeterGeron() << endl;
    cout << "Perimeter Basic: " << triangle.perimeterBasic() << endl;
    return 0;
}