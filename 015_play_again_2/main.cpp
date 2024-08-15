#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    char again;  // Объявление переменной для хранения ответа пользователя
    do
    {
        cout << "\n**Сыграли в увлекательную игру**";
        cout << "\nХотите сыграть ещё раз? (y/n): ";
        cin >> again;  // Ввод ответа пользователя
    } while (again == 'y');  // Цикл продолжается, пока введённое значение равно 'y'

    cout << "\nХорошо, до свидания.";

    return 0;
}
