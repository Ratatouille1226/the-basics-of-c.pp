#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a, b, c; // Числа которые будут записаны в файл

    // Просим пользователя ввести числа
    cout << "Введите три числа через пробел: ";
    cin >> a >> b >> c;

    // Создаем файл numbers.txt и записываем туда числа
    ofstream out("numbers.txt");
    if (!out)
    {
        cerr << "Ошибка, не удалось создать файл numbers.txt" << endl;
        return 1;
    }
    out << a << " " << b << " " << c << endl;
    out.close(); // Закрываем файл

    // Теперь открываем файл чтобы прочитать данные
    ifstream in("numbers.txt");
    if (!in)
    {
        cerr << "Ошибка, не удалось открыть файл numbers.txt" << endl;
        return 1;
    }

    int x, y, z;
    in >> x >> y >> z; // Читаем числа обратно
    in.close();

    int sum = x + y + z;
    cout << "Сумма чисел в файле numbers.txt равна: " << sum << endl;

    return 0;
}