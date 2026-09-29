// Practica_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <array>
#include <vector>
#pragma execution_character_set("utf-8")

int host;
int rnd;
int number;
std::vector<std::string> all_num {};
const int math{ 21 };
int math_a{ math };
int math_b{ math };
int mathtable[math][math];

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    srand(time(0));

    while (host != 4) {
        std::cout << "\n\nВыберите программу:\n 1. \"Угадай число\"\n 2. Таблица умножения \n 3. Поиск делителей\n 4. Выключить программу\n";
        std::cin >> host;
        if (host == 1) {
            host = -10;
            rnd = rand() % 101;
            std::cout << "\nЯ загадал число, от 0 до 100. Пока не угадаешь - не будешь выпущен из программы!";
            while (rnd != host) {
                std::cout << "\nВаша догадка:";
                std::cin >> host;
                if (host > rnd)
                    std::cout << "\nНеа, меньше";
                if (host < rnd)
                    std::cout << "\nНеа, больше";
            }
            std::cout << "\nВ точку. Вы победили!";
        }
        if (host == 2) {
            std::cout << "\nПроизвожу вывод таблицы:\n";
            for (int i = 0; i < math_a;i++) {
                    mathtable[i][0] = i;
                }
            for (int i = 0; i < math_b;i++) {
                    mathtable[0][i] = i;
                }
            for (int a = 1; a < math_a; a++) {
                for (int b = 1; b < math_b; b++) {
                    mathtable[a][b] = mathtable[a][0] * mathtable[0][b];
                }
            }
            for (int a = 0; a < math_a; a++) {
                std::cout << "\n";
                 for (int b = 0; b < math_b; b++) {
                     std::cout << " ";
                     if (mathtable[a][b] < 10)
                         std::cout << " ";
                     if (mathtable[a][b] < 100)
                         std::cout << " ";
                     if (mathtable[a][b] < 1000)
                         std::cout << " ";
                     std::cout << mathtable[a][b];
                 }
            }
        }
        if (host == 3) {
            std::cout << "\n Введите число:\n";
            std::cin >> number;
            std::cout << "Делители:";
            for (int f = 1; f <= number;f++) {
                if (number % f == 0) {
                    std::cout << f << " ";
                }
            }

        }
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
