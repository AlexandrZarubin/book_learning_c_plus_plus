/*
1. Перепишите программу Menu Chooser из этой главы, представив различные
уровни сложности в виде перечисления. При этом продолжайте работать с переменной
типа i nt.

2. Найдите ошибку в следующем цикле:
intx=O:
while (х) x==false
{
++х:
cout << х << endl :

3. Напишите новую версию программы Guess Му Number, где компьютер и игрок
меняются ролями: игрок выбирает число, а компьютер должен его угадать.
*/



#include <iostream>
using namespace std;
//#define Task1
#define Task3
// Определяем перечисление для уровней сложности
enum DifficultyLevel
{
    EASY = 1,
    NORMAL,
    HARD
};

int main()
{
    setlocale(LC_ALL, "");
#ifdef Task1
    cout << "Difficulty Levels\n\n";
    cout << "1 - Easy\n";
    cout << "2 - Normal\n";
    cout << "3 - Hard\n\n";

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch (choice)
    {
    case EASY:  // Используем значение из перечисления
        cout << "You picked Easy.\n";
        break;
    case NORMAL:  // Используем значение из перечисления
        cout << "You picked Normal.\n";
        break;
    case HARD:  // Используем значение из перечисления
        cout << "You picked Hard.\n";
        break;
    default:
        cout << "You made an illegal choice.\n";
    }

#endif // Task1
#ifdef Task3
    srand(static_cast<unsigned int>(time(0)));  // Инициализация генератора случайных чисел на основе текущего времени

    int secretNumber;
    cout << "Выберите число от 1 до 100, чтобы компьютер его угадал: ";
    cin >> secretNumber;

    // Проверяем, чтобы число было в допустимом диапазоне
    if (secretNumber < 1 || secretNumber > 100) {
        cout << "Число должно быть между 1 и 100. Завершаем игру.\n";
        return 1;
    }

    int low = 1;  // Нижняя граница диапазона
    int high = 100;  // Верхняя граница диапазона
    int guess;  // Предположение компьютера
    int tries = 0;  // Количество попыток
    char response;  // Ответ игрока

    cout << "\nКомпьютер попытается угадать ваше число.\n";

    do
    {
        guess = low + (rand() % (high - low + 1));  // Компьютер делает случайное предположение в текущем диапазоне
        ++tries;

        cout << "Компьютер предполагает: " << guess << endl;
        cout << "Предположение слишком высокое, слишком низкое или правильное? (v/n/p): ";
        cin >> response;

        if (response == 'v')  // Если предположение слишком высокое
        {
            high = guess - 1;  // Сужаем диапазон сверху
        }
        else if (response == 'n')  // Если предположение слишком низкое
        {
            low = guess + 1;  // Сужаем диапазон снизу
        }
        else if (response == 'p')  // Если предположение верное
        {
            cout << "\nКомпьютер угадал ваше число за " << tries << " попыток!\n";
        }
        else
        {
            cout << "Некорректный ответ. Пожалуйста, введите 'в', 'н' или 'п'.\n";
        }

    } while (response != 'п');

#endif // Task3


    return 0;
}
