#include "class.h"

Worker::Worker(const string& firstName, const string& lastName, int hours, float payment) : firstName(firstName), lastName(lastName), hours(hours), payment(payment) {}

float Worker::getSalary() const {
    return hours * payment;
}

string Worker::getFullName() const {
    return firstName + "" + lastName;
}