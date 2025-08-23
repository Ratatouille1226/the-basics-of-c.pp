#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // Для поддержки кириллицы в консоли
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float arr[3];

    cout << "Заполните массив чисел" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Введите " << i + 1 << " число: ";
        cin >> arr[i];
    }

    cout << "Вы заполнили весь массив, результат: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " число в массиве" << " - " << arr[i] << endl;
    }

    float sumArr = 0;

    for (int i = 0; i < 3; i++)
    {
        sumArr += arr[i];
    }

    cout << "Результат сложения всех элементов массива: " << sumArr << endl;

    float minNum = arr[0];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        };
    }

    cout << "Минимальное число в массиве: " << minNum << endl;

    return 0;
}