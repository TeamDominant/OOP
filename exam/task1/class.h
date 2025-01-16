#ifndef CLASS_H
#define CLASS_H

#include <string>
using namespace std;

class Worker {
    private:
    string lastName;
    string firstName;
    int hours;
    float payment;

    public:
    Worker(const string& firstName, const string& lastName, int hours, float payment);
    float getSalary() const;
    string getFullName() const;
};

#endif