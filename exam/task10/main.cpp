#include <iostream>
#include "class.h"

using namespace std;

int main() {
    Account account("Hello_world", "qwerty");

    // Попытка чтения данных без входа
    if (!account.readData().empty()) {
        cout << "Data: " << account.readData() << endl;
    } else {
        cout << "Access denied. Please log in first." << endl;
    }

    // Ручной ввод пароля для входа
    string inputPassword;
    cout << "Enter password to log in: ";
    cin >> inputPassword;

    if (account.login(inputPassword)) {
        cout << "Logged in successfully." << endl;

        // Чтение данных
        cout << "Data: " << account.readData() << endl;

        // Запись новых данных
        cout << "Enter new data to update: ";
        string newData;
        cin.ignore(); // Игнорируем остатки предыдущего ввода
        getline(cin, newData);
        account.writeData(newData);

        cout << "Updated Data: " << account.readData() << endl;

        // Выход из аккаунта
        account.logout();
        cout << "Logged out successfully." << endl;
    } else {
        cout << "Login failed. Incorrect password." << endl;
    }

    return 0;
}