#include <windows.h>
#include <iostream>

// namespace нужен для того чтобы создавать пространства для функций если они с одинаковым именем

namespace firstFunc
{
    void foo()
    {
        std::cout << "Hello" << std::endl;
    }
}

namespace secondFunc
{
    void foo()
    {
        std::cout << "World" << std::endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    firstFunc::foo();
    secondFunc::foo();

    return 0;
}