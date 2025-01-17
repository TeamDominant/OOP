#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Создаем два параллельных вектора с началом в (1, 1) и (4, 1), смещенный вектор на (2, -1)
    TwoVectors vectors(1, 1, 4, 1, 2, -1);

    // Вычисляем и выводим площадь параллелограмма, образованного этими векторами
    cout << "Area of the parallelogram: " << vectors.calculateArea() << endl;

    return 0;
}