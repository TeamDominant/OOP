#ifndef CLASS_H
#define CLASS_H
using namespace std;
#include <vector>

class Room {
private:
    double length;  // Длина
    double width;   // Ширина
    double height;  // Высота

public:
    // Конструктор
    Room(double length, double width, double height);

    // Метод для вычисления площади стен (площадь всех стен комнаты)
    double calculateWallArea() const;
};

class Office {
private:
    int roomCount;                // Количество комнат
    double paintPerSquareMeter;   // Расход краски на 1 м^2
    vector<Room> rooms;      // Список комнат

public:
    // Конструктор
    Office(int roomCount, double paintPerSquareMeter);

    // Метод добавления комнаты
    void addRoom(const Room& room);

    // Метод для вычисления необходимого количества краски
    double calculatePaintNeeded() const;
};

#endif