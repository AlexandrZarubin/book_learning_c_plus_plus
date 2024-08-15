#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // Определение перечисления для индексов массива слов
    enum fields { WORD, HINT, NUM_FIELDS };

    // Количество слов и массив слов с подсказками
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"wall", "Кажется, вы бьётесь головой о что-то?"},//стена
        {"glasses", "Эти вещи могут помочь вам увидеть ответ."},//очки
        {"labored", "Вы продвигаетесь медленно, не так ли?"},//labored
        {"persistent", "Не сдавайтесь."},//настойчивый
        {"jumble", "Это то, о чём эта игра."}//путать
    };
    
    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

    // Выбор случайного слова из массива
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];  // слово для отгадывания
    string theHint = WORDS[choice][HINT];  // подсказка для слова

    // Перемешивание выбранного слова
    string jumble = theWord;  // перемешанная версия слова
    int length = jumble.size();
    for (int i = 0; i < length; ++i)
    {
        int index1 = (rand() % length); // случайный индекс 1
        int index2 = (rand() % length); // случайный индекс 2
        char temp = jumble[index1]; // временное сохранение символа
        jumble[index1] = jumble[index2]; // обмен символами
        jumble[index2] = temp; // присвоение сохраненного символа
    }
    
    // Приветствие и правила игры
    cout << "\t\t\tДобро пожаловать в игру Word Jumble!\n\n";
    cout << "Разгадайте слово, переставив буквы.\n";
    cout << "Введите 'hint' для получения подсказки.\n";
    cout << "Введите 'quit', чтобы выйти из игры.\n\n";
    cout << "Перемешанное слово: " << jumble;

    // Ввод догадки игрока
    string guess;
    cout << "\n\nВаш ответ: ";
    cin >> guess;

    // Проверка догадки игрока
    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint") // если игрок просит подсказку
        {
            cout << theHint; // вывод подсказки
        }
        else // если ответ неправильный
        {
            cout << "К сожалению, это не так.";
        }

        cout << "\n\nВаш ответ: ";
        cin >> guess; // повторный ввод догадки
    }

    // Если игрок угадал слово
    if (guess == theWord)
    {
        cout << "\nВерно! Вы угадали!\n";
    }

    // Прощание с игроком
    cout << "\nСпасибо за игру.\n";

    return 0;
}
