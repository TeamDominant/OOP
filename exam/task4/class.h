#ifndef CLASS_H
#define CLASS_H

#include <cmath>
using namespace std;

class Power {
    private:
    float first;
    int second;

    public:
    Power(float first, int second);
    float calculateNum() const;
};

#endif