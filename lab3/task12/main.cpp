#include <iostream>
#include "class.h"

using namespace std;

int main() {
    // Указатель на базовый класс
    Figure* figure = nullptr;

    // Параллелепипед
    Parallelepiped parallelepiped(3, 4, 5);
    figure = &parallelepiped;
    cout << "Volume of Parallelepiped: " << figure->Volume() << endl;

    // Тетраэдр
    Tetrahedron tetrahedron(6);
    figure = &tetrahedron;
    cout << "Volume of Tetrahedron: " << figure->Volume() << endl;

    // Шар
    Sphere sphere(3);
    figure = &sphere;
    cout << "Volume of Sphere: " << figure->Volume() << endl;

    return 0;
}