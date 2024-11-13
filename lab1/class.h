#ifndef CLASS_H
#define CLASS_H
#include <string>
#include <iostream>

using namespace std;

class NumberText;

class Money {
protected:
    int rubles;
    int kopeyki;    
public:
    void normalize() {
    if (kopeyki >= 100) {
        rubles += kopeyki / 100;
        kopeyki %= 100;
        } else if (kopeyki < 0) {
        int deficit_rubles = (-kopeyki + 99) / 100;
        rubles -= deficit_rubles;
        kopeyki += deficit_rubles * 100;
        }
    }
    Money (int rubles = 0, int kopeyki = 0) : rubles(rubles), kopeyki(kopeyki) {}
    Money operator+(const Money& other) const {
         Money result = Money(rubles + other.rubles, kopeyki + other.kopeyki);
         result.normalize();
         return result;
    }
    Money operator-(const Money& other) const {
        Money result = Money(rubles - other.rubles, kopeyki - other.kopeyki);
        result.normalize();
        return result;
    }
    Money operator/(const Money& other) const {
        Money result = Money(rubles / other.rubles, kopeyki / other.kopeyki);
        result.normalize();
        return result;
    }
    Money operator*(double value) const {
        int total_kopeyki = (rubles * 100 + kopeyki) * value;
        Money result(total_kopeyki / 100, total_kopeyki % 100);
        return result;
    }
    Money operator/(double value) const {
        int total_kopeyki = (rubles * 100 + kopeyki) / value;
        Money result(total_kopeyki / 100, total_kopeyki % 100);
        result.normalize();
        return result;
    }


    friend ostream& operator<<(ostream& os, const Money& nt) {
    os << "Рублей: " << nt.rubles << ", Копеек: " << nt.kopeyki;
    return os;
    }
};

// class Number {
// protected:
//     int value;
// public:
//     Number(int v = 0) : value(v) {}
//     Number operator+(const Number& other) const {
//         return Number(value + other.value);
//     }
//     friend class NumberText;
// };

// class Text {
// protected:
//     string text;
// public:
//     Text(string t = "") : text(t) {}

//     Text operator+(const Text& other) const {
//         return Text(text + other.text);
//     }
//     friend class NumberText;
// };

// class NumberText : public Number, public Text {
// public:
//     NumberText(int v, string t) : Number(v), Text(t) {}
//     NumberText operator+(const NumberText& other) const {
//         Number new_number = Number(value + other.value);
//         Text new_text = Text(text + other.text);
//         return NumberText(new_number.value, new_text.text);
//     }
//     friend ostream& operator<<(ostream& os, const NumberText& nt) {
//         os << "Номер: " << nt.value << ", Текст: " << nt.text;
//         return os;
//     }
// };

#endif
