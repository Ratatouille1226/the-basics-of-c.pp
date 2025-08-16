#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float num1, num2, res;
    char operand;

    cout << "Введите первое число:";
    cin >> num1;

    cout << "Введите математический оператор (*, +, -, /):";
    cin >> operand;

    cout << "Введите второе число:";
    cin >> num2;

    switch (operand)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        break;
    }

    cout << "Результат выполнения примера:" << res;
}