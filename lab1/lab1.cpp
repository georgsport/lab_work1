// В этом файле только boilerplate-код и вызовы главных методов упражнений.
// Ответы на вопросы и алгоритмы находятся в соответствующих файлах.

#include <iostream>
#include "taskOne.h"
#include "taskTwo.h"

int main()
{
    system("chcp 1251");      //Изменение кодировки консоли
    system("cls");            //Очистка консоли
    setlocale(LC_ALL, "rus"); //Изменение кодировки программы

    std::cout << "###ЗАДАНИЕ 1###\n";
    exerciseOne();
    std::cout << "\n\n###ЗАДАНИЕ 2###\n";
    exerciseTwo();
}