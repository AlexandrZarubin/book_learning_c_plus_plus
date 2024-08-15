#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Счёт вперёд:\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << i << " ";
    }

    cout << "\n\nСчёт назад:\n";
    for (int i = 9; i >= 0; --i)
    {
        cout << i << " ";
    }

    cout << "\n\nСчёт с шагом в пять:\n";
    for (int i = 0; i <= 50; i += 5)
    {
        cout << i << " ";
    }

    cout << "\n\nСчёт с пустыми операторами:\n";
    int count = 0;
    for (; count < 10; )
    {
        cout << count << " ";
        ++count;
    }

    cout << "\n\nСчёт с вложенными циклами for:\n";
    const int СТРОКИ = 5;
    const int СТОЛБЦЫ = 3;
    for (int i = 0; i < СТРОКИ; ++i)
    {
        for (int j = 0; j < СТОЛБЦЫ; ++j)
        {
            cout << i << "," << j << "  ";
        }

        cout << endl;
    }

    return 0;
}
