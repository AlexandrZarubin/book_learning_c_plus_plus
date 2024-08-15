#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int count = 0;  // Объявляется и инициализируется переменная count значением 0
    while (true)  // Бесконечный цикл
    {
        count += 1;  // Увеличение значения переменной count на 1

        // Прерывание цикла, если значение count больше 10
        if (count > 10)
        {
            break;  // Выход из цикла
        }

        // Пропуск числа 5
        if (count == 5)
        {
            continue;  // Переход к следующей итерации цикла, пропуская вывод числа 5
        }

        cout << count << endl;  // Вывод значения переменной count
    }

    return 0;
}
