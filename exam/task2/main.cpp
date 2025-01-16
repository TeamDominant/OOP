#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Product product(299, 3000);
                // price amount
    cout << "Product price summary: " << product.getPrice() << " RUB" << endl;
    return 0;
}