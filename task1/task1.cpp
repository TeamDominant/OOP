//
//      _                 _                   _   
//     | |               (_)                 | |  
//   __| | ___  _ __ ___  _ _ __   __ _ _ __ | |_ 
//  / _` |/ _ \| '_ ` _ \| | '_ \ / _` | '_ \| __|
// | (_| | (_) | | | | | | | | | | (_| | | | | |_ 
//  \__,_|\___/|_| |_| |_|_|_| |_|\__,_|_| |_|\__|
//      _                     _         _                    
//     | |                   | |       | |                   
//   __| | ___    _ __   ___ | |_   ___| |__   __ _ _ __ ___ 
//  / _` |/ _ \  | '_ \ / _ \| __| / __| '_ \ / _` | '__/ _ \
// | (_| | (_) | | | | | (_) | |_  \__ \ | | | (_| | | |  __/
//  \__,_|\___/  |_| |_|\___/ \__| |___/_| |_|\__,_|_|  \___|                                                 
//                                                      _   _                        _   _                
//                                                     | | | |                      | | | |               
//   ___  _ __   ___ _ __   ___  _ __  ___  ___  _ __  | |_| |__   ___    __ _ _   _| |_| |__   ___  _ __ 
//  / _ \| '__| / __| '_ \ / _ \| '_ \/ __|/ _ \| '__| | __| '_ \ / _ \  / _` | | | | __| '_ \ / _ \| '__|
// | (_) | |    \__ \ |_) | (_) | | | \__ \ (_) | |    | |_| | | |  __/ | (_| | |_| | |_| | | | (_) | |   
//  \___/|_|    |___/ .__/ \___/|_| |_|___/\___/|_|     \__|_| |_|\___|  \__,_|\__,_|\__|_| |_|\___/|_|   
//                  | |                                                                                   
//                  |_|                                                                                   
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// я не хочу это комментить
const double PI = 3.14159265358979323846;

// зачем я этим занимаюсь по итогу?
double calculateSignal(int signalType, double A, double f, double t) {
    // угловая частота
    double omega = 2 * PI * f;
    
    switch (signalType) {
        case 1: {
            // x(t) = A * sin(omega * t)
            return A * sin(omega * t);
        }
        case 2: {
            // x(t) = (4A / π) * Σ [sin((2k-1)ωt) / (2k-1)]
            double sum = 0;
            int terms = 100;  // кол-во гармоник по заданию
            for (int k = 1; k <= terms; ++k) {
                sum += sin((2 * k - 1) * omega * t) / (2 * k - 1);
            }
            return (4 * A / PI) * sum;
        }
        case 3: {
            // x(t) = (A / π) * Σ [(-1)^k * sin(kωt) / k]
            double sum = 0;
            int terms = 100;  // кол-во гармоник по заданию
            for (int k = 1; k <= terms; ++k) {
                sum += pow(-1, k) * sin(k * omega * t) / k;
            }
            return (A / PI) * sum;
        }
        default:
            cerr << "Ошибка: неверный номер сигнала." << endl;
            return 0.0;
    }
}

/* i just loved making it like that i dont care */
void Task01() {
    // enter your data here
    double A = 3.3;  // amplitude
    double f = 10000;  // freq
    int num_points = 100;  // points num lol
    double fs = 50 * f;  // частота дискретизации

    // cout just to make sure you are using the correct data
    cout << "Генерация " << num_points << " точек сигнала с амплитудой " << A << " В и частотой " << f << " Гц" << endl;

    // генерация 100 точек сигнала для каждого типа сигнала
    for (int signalType = 1; signalType <= 3; ++signalType) {
        cout << "Сигнал " << signalType << ":" << endl;

        // вычисление значений сигнала в 100 точках
        for (int i = 0; i < num_points; ++i) {
            double t = i / fs;  // время для каждой точки
            double value = calculateSignal(signalType, A, f, t);
            cout << "t = " << t << ", x(t) = " << value << endl;
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru.UTF-8");
    int TaskNumber;    
    cout << "Введите номер задачи: " << endl;
    cin >> TaskNumber;

    switch (TaskNumber) {
        case 1: 
            Task01(); 
            break;
        default:
            cerr << "Неверный номер задачи." << endl;
    }

    return 0;
}

//
//      _                 _                   _   
//     | |               (_)                 | |  
//   __| | ___  _ __ ___  _ _ __   __ _ _ __ | |_ 
//  / _` |/ _ \| '_ ` _ \| | '_ \ / _` | '_ \| __|
// | (_| | (_) | | | | | | | | | | (_| | | | | |_ 
//  \__,_|\___/|_| |_| |_|_|_| |_|\__,_|_| |_|\__|
//