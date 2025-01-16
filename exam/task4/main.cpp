#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Power power(1.5, 5);
    cout << "Result: " << power.calculateNum() << endl;
    return 0;
}