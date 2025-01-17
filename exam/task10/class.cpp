#include "class.h"

Account::Account(const string& data, const string& password)
    : data(data), isLoggedIn(false) {
    setPassword(password);
}

// Закрытый метод установки пароля
void Account::setPassword(const string& pass) {
    password = pass;
}

// Метод входа
bool Account::login(const string& pass) {
    if (pass == password) {
        isLoggedIn = true;
        return true;
    }
    return false;
}

// Метод выхода
void Account::logout() {
    isLoggedIn = false;
}

// Метод чтения данных
string Account::readData() const {
    if (isLoggedIn) {
        return data;
    }
    return ""; // Доступ запрещен
}

// Метод записи данных
void Account::writeData(const string& newData) {
    if (isLoggedIn) {
        data = newData;
    }
}