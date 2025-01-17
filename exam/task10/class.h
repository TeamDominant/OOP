#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class Account {
private:
    string data;       // Данные пользователя
    string password;   // Пароль
    bool isLoggedIn;        // Флаг входа в аккаунт

    // Закрытый метод установки пароля
    void setPassword(const string& pass);

public:
    // Конструктор
    Account(const string& data, const string& password);

    // Методы входа и выхода из аккаунта
    bool login(const string& pass);
    void logout();

    // Методы чтения и записи данных
    string readData() const;
    void writeData(const string& newData);
};

#endif