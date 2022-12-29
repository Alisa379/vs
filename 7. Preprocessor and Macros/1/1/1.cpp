#include <iostream>
#include "1.h"

int main()
{
    const int MODE = 1;
    switch (MODE) {
    case 0:
        std::cout << "Working in workout mode";
        break;
    case 1:
        add();
        break;
    default:
        std::cout << "Неизвестный режим. Завершение работы";
        break;
    }
}