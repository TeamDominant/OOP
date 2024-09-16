#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

double signal(int num, double A, double f, double t) {
    double omega = 2 * PI * f;
    switch (num) {
    case 1: {
        return A * sin(omega * t);
    }
    case 2: {
        double sum = 0;
        for (int i = 0; i < 100; i++) {
            sum += sin((2 * i - 1) * omega * t) / (2 * i - 1);
        }
        return (4 * A / PI) * sum;
    }
    case 3: {
        double sum = 0;
        for (int i = 0; i < 100; i++) {
            sum += pow(-1, i) * sin(i * omega * t) / i;
        }
    }
    }
}

int main() {
    double A = 3.3;
    double f = 10000;
    double t = 500000;
    double At1, At2, At3;

    for (int i = 0; i <= 100; i++) {
        t = i * (1 / t);
        At1 = signal(1, A, f, t);
        At2 = signal(2, A, f, t);
        At3 = signal(3, A, f, t);
    }
}