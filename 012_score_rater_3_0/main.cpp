#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int score;  // Объявление переменной для хранения результата
    cout << "Введите ваш результат: ";
    cin >> score;  // Ввод значения переменной score пользователем

    if (score >= 1000)
    {
        cout << "Вы набрали 1000 или более. Впечатляет!\n";
    }
    else if (score >= 500)
    {
        cout << "Вы набрали 500 или более. Хорошо.\n";
    }
    else if (score >= 250)
    {
        cout << "Вы набрали 250 или более. Неплохо.\n";
    }
    else
    {
        cout << "Вы набрали меньше 250. Хвастаться нечем.\n";
    }

    return 0;
}
