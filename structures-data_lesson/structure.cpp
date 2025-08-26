#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
// Структура по которой можно создавать разные деревья
struct Tree
{
    string name;
    int age;
    bool is_alive;
    float height;

    // Функция которую можно вызывать у разных деревьев
    void get_tree()
    {
        cout << "Название дерева: " << name << ", возраст: " << age << endl;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    // Создаем экземпляры
    Tree oak;
    Tree birch;
    // Описываем данные дуба
    oak.name = "Дуб";
    oak.age = 27;
    // Данные берёзы
    birch.name = "Берёза";
    birch.age = 5;

    // Вызываем функцию у каждого дерева
    oak.get_tree();
    birch.get_tree();

    return 0;
}