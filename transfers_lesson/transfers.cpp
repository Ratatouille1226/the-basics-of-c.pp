#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

// Какие то перечисления
enum Options
{
    open,
    close,
    wait,
    del
};

// Структура файла
struct File
{
    float weight;
    string name;
    Options options;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Записываем данные в структуру
    File my_file;
    my_file.weight = 1.5f;
    my_file.name = "file.txt";
    my_file.options = Options::wait;

    // Проверяем закрыт файл, открыт, удален или в ожидании
    switch (my_file.options)
    {
    case open:
        cout << "Файл открыт" << endl;
        break;
    case close:
        cout << "Файл закрыт" << endl;
        break;
    case wait:
        cout << "Файл в ожидании" << endl;
        break;
    case del:
        cout << "Файл удален" << endl;
        break;
    default:
        cout << "Неизвестное состояние файла" << endl;
        break;
    }

    return 0;
}