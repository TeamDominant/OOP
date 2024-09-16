#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

double signal(int num, double A, double f, double t) {
    double omega = 2 * PI * f;
    double 
    switch (num) {
    case 1: {
        At
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
















/* double TaskList(int TaskNumber, double A, double f, double t) {
    double omega = 2 * PI * f;

    switch (TaskNumber) {
    case 1: {
        return A * sin(omega * t);
    }
    case 2: {
        double sum = 0;
        int terms = 100; 
        for (int k = 1; k <= terms; ++k) {
            sum += sin((2 * k - 1) * omega * t) / (2 * k - 1);
        }
        return (4 * A / PI) * sum;
    }
    case 3: {
        double sum = 0;
        int terms = 100; 
        for (int k = 1; k <= terms; ++k) {
            sum += pow(-1, k) * sin(k * omega * t) / k;
        }
        return (A / PI) * sum;
    }
    default:
        cout << "Error: wrong number entered" << endl;
        return 0;
    }
}

int main() {
    int TaskNumber;
    double A, f, t;

    cout << "Enter task number: ";
    cin >> TaskNumber;

    cout << "Enter A: ";
    cin >> A;

    cout << "Enter f: ";
    cin >> f;

    cout << "Enter t: ";
    cin >> t;

    double result = TaskList(TaskNumber, A, f, t);

    cout << "t = " << t << "result = " << result << endl;

    return 0;
}
*/ 