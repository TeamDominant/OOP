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
//                                                                                  
#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip> /* чтобы избавиться от 1.1e-05 чисел */

using namespace std;

//* Pasted re-code by Eduard
const double PI = 3.14159; // Число Пи
const double A = 3.3;  // Амплитуда
const double f = 10000;  // Частота (10 кГц)
const double T = 1.0 / f;  // Период
const int num_points = 100;  // Кол-во точек
const int harmonics = 100;  // Гармоники для меандра и пилы

// Функция для синуса
vector<double> sin_wave(double A, double f, const vector<double>& t) {
    vector<double> result;
    for (double time : t) result.push_back(A * sin(2 * PI * f * time));
    return result;
}

// Функция для меандра
vector<double> square_wave(double A, double f, const vector<double>& t) {
    vector<double> result(t.size(), 0.0);
    for (int k = 1; k <= harmonics; ++k)
        for (size_t i = 0; i < t.size(); ++i)
            result[i] += (4 * A / PI) * sin((2 * k - 1) * 2 * PI * f * t[i]) / (2 * k - 1);
    return result;
}

// Функция для пилы
vector<double> sawtooth_wave(double A, double f, const vector<double>& t) {
    vector<double> result(t.size(), 0.0);
    for (int k = 1; k <= harmonics; ++k)
        for (size_t i = 0; i < t.size(); ++i)
            result[i] += (2 * A / PI) * pow(-1, k + 1) * sin(2 * PI * f * k * t[i]) / k;
    return result;
}

int main() {
    setlocale(LC_ALL, "ru.UTF-8");
    vector<double> t(num_points);  // Массив времени
    for (int i = 0; i < num_points; ++i) t[i] = i * T / num_points;

    // Генерация сигналов
    auto sin_values = sin_wave(A, f, t);
    auto square_values = square_wave(A, f, t);
    auto sawtooth_values = sawtooth_wave(A, f, t);

    // Вывод значений
    cout << fixed << setprecision(6); // Установка шестизначной точности для вывода
    for (int i = 0; i < num_points; ++i)
        cout << "t = " << t[i] << " | Синус = " << sin_values[i] << " | Меандр = " << square_values[i]
        << " | Пила = " << sawtooth_values[i] << endl;

    return 0;
}

//      _                 _                   _   
//     | |               (_)                 | |  
//   __| | ___  _ __ ___  _ _ __   __ _ _ __ | |_ 
//  / _` |/ _ \| '_ ` _ \| | '_ \ / _` | '_ \| __|
// | (_| | (_) | | | | | | | | | | (_| | | | | |_ 
//  \__,_|\___/|_| |_| |_|_|_| |_|\__,_|_| |_|\__|
//