#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));  // Инициализация генератора случайных чисел на основе текущего времени

    int randomNumber = rand(); // Генерация случайного числа

    int die = (randomNumber % 6) + 1; // Получение числа от 1 до 6
    cout << "Вы выбросили " << die << endl;  // Вывод результата броска
    cout << (static_cast<unsigned int> (time(0)))%6;
    return 0;
}
