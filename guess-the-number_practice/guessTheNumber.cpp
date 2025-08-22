#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Для поддержки кириллицы в консоли
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(NULL)); // Для обновления случайных чисел

    int rand_num = 1 + rand() % 15; // Случайные числа от 1 до 15
    bool stop = false;
    int user_input;

    cout << "Игра угадай число, сейчас случайным образом было загадано число от 1 до 15" << endl;

    do
    {
        cout << "Введите число ";
        cin >> user_input;

        if (user_input != rand_num)
        {
            cout << "Вы не угадали..." << endl;
        }
        else
        {
            stop = true;
            cout << "Вы угадали!" << endl;
        }

    } while (!stop); // Цикл работает до тех пор пока stop не true

    return 0;
};