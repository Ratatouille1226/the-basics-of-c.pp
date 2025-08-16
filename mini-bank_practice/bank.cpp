#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

// Структура для хранения информации
struct Account
{
    string password;
    string username;
    double balance;
};

// Функция для сохранения аккаунта в файл
void saveAccount(const Account &acc)
{
    ofstream file("account.txt");
    if (file.is_open())
    {
        file << acc.password << endl;
        file << acc.username << endl;
        file << acc.balance << endl;
        file.close();
    }
}

// Функция для зрагрузки аккаунта из файла
bool getAccount(Account &acc)
{
    ifstream file("account.txt");
    if (file.is_open())
    {
        getline(file, acc.password);
        getline(file, acc.username);
        file >> acc.balance;
        file.close();
        return true;
    }
    return false;
}

int main()
{
    // Для поддержки кириллицы в консоли
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Account acc;

    // Проверяем есть ли сохраненный аккаунт
    if (!getAccount(acc))
    {
        cout << "\\ СОЗДАНИЕ НОВОГО АККАУНТА //" << endl;
        cout << "Введите имя пользователя: ";
        cin >> acc.username;

        cout << "Введите пароль: ";
        cin >> acc.password;
        acc.balance = 0.0;

        saveAccount(acc);
        cout << "Аккаунт успешно создан!" << endl;
    }
    else
    { // Авторизация
        string pass;
        cout << "Введите пароль для входа: ";
        cin >> pass;
        if (pass != acc.password)
        {
            cout << "Неверный пароль, завершение программы..." << endl;
            return 0;
        }
        else
        {
            cout << "Вы успешно авторизовались! Добро пожаловать: " << acc.username << endl;
        }
    }

    // Выбор действия программы
    int choice;

    do
    {
        cout << "\n--- МЕНЮ ---\n";
        cout << "1. Пополнить счёт" << endl;
        cout << "2. Проверить баланс" << endl;
        cout << "3. Снять деньги" << endl;
        cout << "4. Выйти" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        // Условия действий выбора пользователя

        if (choice == 1) // Пополнение
        {
            double amount;
            cout << "Введите сумму пополненя: ";
            cin >> amount;
            if (amount)
            {
                acc.balance += amount;
                cout << "Вы успешно пополнили счёт. Новый баланс: " << acc.balance << " руб" << endl;
            }
            else
            {
                cout << "Сумма должна быть положитедьной!" << endl;
            }
        }

        else if (choice == 2) // Проверка баланса
        {
            cout << "Ваш баланс: " << acc.balance << endl;
        }

        else if (choice == 3) // Снятие денег
        {
            double amount;
            cout << "Введите сумму которую хотите снять: ";
            cin >> amount;
            if (amount > 0 && amount <= acc.balance)
            {
                acc.balance -= amount;
                cout << "Вы успешно сняли: " << amount << " рублей, " << "Баланс: " << acc.balance << " руб" << endl;
            }
            else
            {
                cout << "Недостаточно средств для снятия" << endl;
            }
        }

        else if (choice == 4) // Выход
        {
            cout << "Сохранение данных и выход..." << endl;
            saveAccount(acc);
        }
        else
        {
            cout << "Несуществующая команда..." << endl;
        }

    } while (choice != 4);

    return 0;
}