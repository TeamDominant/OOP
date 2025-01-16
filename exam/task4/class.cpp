#include "class.h"

Power::Power(float first, int second) : first(first), second(second) {}

float Power::calculateNum() const {
    return pow(first, second);
}