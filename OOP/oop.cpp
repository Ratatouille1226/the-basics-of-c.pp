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
    Hero(string name, int health, int armor)
    {
        set_data(name, health, armor);
    }

    void set_data(string name, int health, int armor)
    {
        this->name = name;
        this->health = health;
        this->armor = armor;
    }

    void greeting()
    {
        cout << "Ваш герой " << name << " имеет " << health << " здоровья и " << armor << " брони" << endl;
    }

    ~Hero()
    {
        cout << "Объект удалён" << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Экземпляр героя 1
    Hero superman("Супермен", 120, 100); // Как выглядит с приватными полями и методом установки данных (ниже пример без инкапсуляции и конструктора)
    // superman.set_data("Супермен", 120, 100);
    // superman.name = "Супермен";
    // superman.health = 120;
    // superman.armor = 100;
    superman.greeting();

    // Экземпляр героя 2
    Hero thor("Тор", 100, 75);
    thor.greeting();

    return 0;
}