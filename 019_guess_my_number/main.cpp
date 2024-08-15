#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));  // Инициализация генератора случайных чисел на основе текущего времени

    int secretNumber = rand() % 100 + 1;  // Генерация случайного числа от 1 до 100
    int tries = 0;  // Переменная для отслеживания количества попыток
    int guess;  // Переменная для хранения предположения пользователя

    cout << "\tДобро пожаловать в игру 'Угадай мое число'\n\n";

    do
    {
        cout << "Введите ваше предположение: ";
        cin >> guess;  // Ввод предположения пользователя
        ++tries;  // Увеличение количества попыток

        if (guess > secretNumber)
        {
            cout << "Слишком высоко!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "Слишком низко!\n\n";
        }
        else
        {
            cout << "\nПравильно! Вы угадали число за " << tries << " попыток!\n";
        }

    } while (guess != secretNumber);  // Цикл продолжается до тех пор, пока предположение не совпадет с загаданным числом

    return 0;
}
