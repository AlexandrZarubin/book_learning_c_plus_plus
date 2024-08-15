#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    char again = 'y';  // Инициализация переменной again значением 'y'
    while (again == 'y')  // Цикл выполняется, пока переменная again равна 'y'
    {
        cout << "\n**Сыграли в увлекательную игру**";
        cout << "\nХотите сыграть ещё раз? (y/n): ";
        cin >> again;  // Пользователь вводит 'y' или 'n'
    }

    cout << "\nХорошо, до свидания.";

    return 0;
}
