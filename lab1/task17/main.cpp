#include "class.h"

int main(){
    Money first(10, 45);
    Money second(12, 124);
    Money sum(first + second);
    Money substract(first - second);
    Money divide(first / second);
    cout << "Сумма: " << sum << endl;
    cout << "Вычитание: " << substract << endl;
    cout << "Деление: " << divide << endl;
    Money multiply1 = first / 1.5;
    cout << multiply1 << endl;
}