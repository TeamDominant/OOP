#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Worker worker("John", "Leaf", 40, 100);
                // name surname hours payment
    cout << "Salary: " << worker.getSalary() << " RUB" << endl;
    return 0;
}