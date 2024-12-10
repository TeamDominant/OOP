#ifndef CLASS_H
#define CLASS_H

using namespace std;

class Money {
private:
    int rubles;
    int kopecks;

public:
    // Конструкторы
    Money();
    Money(int rub, int kop);

    // Методы
    void Normalize(); // Приведение копеек к корректному диапазону (0-99)

    // Перегрузка операторов > и < как методы класса
    bool operator>(const Money& other) const;
    bool operator<(const Money& other) const;

    // Дружественная функция для перегрузки оператора ==
    friend bool operator==(const Money& m1, const Money& m2);

    // Метод для отображения денег
    void Display() const;
};

#endif