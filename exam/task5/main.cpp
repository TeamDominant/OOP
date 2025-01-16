#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Money money(100, 5); // 5 купюр номиналом 100
    cout << "Summa: " << money.summa() << " units " << endl;
    return 0;
}