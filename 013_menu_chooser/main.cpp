#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Уровни сложности\n\n";
    cout << "1 - Легкий\n";
    cout << "2 - Нормальный\n";
    cout << "3 - Сложный\n\n";

    int choice;
    cout << "Ваш выбор: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Вы выбрали Легкий уровень.\n";
        break;
    case 2:
        cout << "Вы выбрали Нормальный уровень.\n";
        break;
    case 3:
        cout << "Вы выбрали Сложный уровень.\n";
        break;
    default:
        cout << "Вы сделали неверный выбор.\n";
    }

    return 0;
}
