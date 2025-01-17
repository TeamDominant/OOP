#include "class.h"

// Конструктор
Room::Room(double length, double width, double height)
    : length(length), width(width), height(height) {}

// Метод для вычисления площади стен
double Room::calculateWallArea() const {
    double wall1 = length * height * 2; // Площадь двух длинных стен
    double wall2 = width * height * 2;  // Площадь двух коротких стен
    return wall1 + wall2;
}

// Конструктор
Office::Office(int roomCount, double paintPerSquareMeter)
    : roomCount(roomCount), paintPerSquareMeter(paintPerSquareMeter) {}

// Метод добавления комнаты
void Office::addRoom(const Room& room) {
    if (rooms.size() < roomCount) {
        rooms.push_back(room);
    }
}

// Метод для вычисления необходимого количества краски
double Office::calculatePaintNeeded() const {
    double totalArea = 0.0;

    for (const auto& room : rooms) {
        totalArea += room.calculateWallArea();
    }

    return totalArea * paintPerSquareMeter;
}