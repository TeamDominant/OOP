#ifndef CLASS_H
#define CLASS_H
using namespace std;

class Triangle {
    private:
    double a,b,c;

    public:
    Triangle(double a, double b, double c);
    float perimeterGeron() const;
    float perimeterBasic() const;
};

#endif