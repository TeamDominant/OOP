#ifndef CLASS_H
#define CLASS_H
#include <string>
using namespace std;

class Account {
private:
    std::string data;       // Данные пользователя
    std::string password;   // Пароль
    bool isLoggedIn;        // Флаг входа в аккаунт

    // Закрытый метод установки пароля
    void setPassword(const std::string& pass);

public:
    // Конструктор
    Account(const std::string& data, const std::string& password);

    // Методы входа и выхода из аккаунта
    bool login(const std::string& pass);
    void logout();

    // Методы чтения и записи данных
    std::string readData() const;
    void writeData(const std::string& newData);
};

#endif