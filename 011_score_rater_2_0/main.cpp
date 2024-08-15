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
    else
    {
        cout << "Вы набрали меньше 1000.\n";
    }

    return 0;
}
