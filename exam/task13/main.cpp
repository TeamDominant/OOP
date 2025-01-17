#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Student student("Иван", "Иванов", "Иванович", 5, 450); // 5 дисциплин, сумма оценок 450

    cout << "Student: " << student.getFullName() << endl;
    cout << "Average grade: " << student.calculateAverageGrade() << endl;

    return 0;
}
