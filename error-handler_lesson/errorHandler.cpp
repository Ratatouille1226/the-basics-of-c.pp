#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

// Функция которая делит два числа (обрабатываем ошибку что на 0 делить нельзя)
void divide(float a, float b)
{
    if (a == 0 || b == 0)
        throw 400;
    else
        cout << (a / b);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Выполняем условия, если throw не сработал то вызываем функцию, если же он выкинул ошибку то показываем предупреждение
    try
    {
        divide(10.4f, 2.2f);
    }
    catch (int err)
    {
        if (err == 400)
            cout << "Ошибка выражения, на 0 делить нельзя!";
    }

    return 0;
}