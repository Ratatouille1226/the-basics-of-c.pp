#include <iostream>
#include <windows.h>

using namespace std;

// Класс героев
class Hero
{
private:
    string name;
    int health;
    int armor;

public:
    void set_data(string n, int h, int a)
    {
        name = n;
        health = h;
        armor = a;
    }

    void greeting()
    {
        cout << "Ваш герой " << name << " имеет " << health << " здоровья и " << armor << " брони" << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Экземпляр героя 1
    Hero superman;
    superman.set_data("Супермен", 120, 100); // Как выглядит с приватными полями и методом установки данных (ниже пример без инкапсуляции)
    // superman.name = "Супермен";
    // superman.health = 120;
    // superman.armor = 100;
    superman.greeting();

    // Экземпляр героя 2
    Hero thor;
    thor.set_data("Тор", 100, 75);
    thor.greeting();

    return 0;
}