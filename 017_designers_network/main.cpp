#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    string username;  // Переменная для хранения имени пользователя
    string password;  // Переменная для хранения пароля
    bool success;  // Переменная для отслеживания успешности входа

    cout << "\tСеть Игротехников\n";  // Заголовок с табуляцией

    do
    {
        cout << "\nИмя пользователя: ";
        cin >> username;  // Ввод имени пользователя

        cout << "Пароль: ";
        cin >> password;  // Ввод пароля

        if (username == "White" && password == "12345")
        {
            cout << "\nПривет, White.";  // Приветствие для White
            success = true;  // Вход успешен
        }

        else if (username == "S.Miyamoto" && password == "mariobros")
        {
            cout << "\nКак дела, Сигэру?";  // Приветствие для Сигэру Миямото
            success = true;  // Вход успешен
        }

        else if (username == "W.Wright" && password == "thesims")
        {
            cout << "\nКак идут дела, Уилл?";  // Приветствие для Уилла Райта
            success = true;  // Вход успешен
        }

        else if (username == "guest" || password == "guest")
        {
            cout << "\nДобро пожаловать, гость.";  // Приветствие для гостя
            success = true;  // Вход успешен
        }

        else
        {
            cout << "\nВаш вход не удался.";  // Сообщение об ошибке входа
            success = false;  // Вход не успешен
        }
    } while (!success);  // Повторение цикла, пока вход не будет успешным

    return 0;
}
