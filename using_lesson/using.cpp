#include <iostream>
#include <windows.h>

// using нужен для того чтобы вытаскивать функции и использовать их, чтобы не писать постоянно std::(функция)

using std::cin;
using std::cout;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;

    cout << "Введите первое число:";
    cin >> a;

    cout << "Введите второе число:";
    cin >> b;

    cout << "Результат выражения:" << a + b << endl;
    return 0;
}