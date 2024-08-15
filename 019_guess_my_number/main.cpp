#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));  // ������������� ���������� ��������� ����� �� ������ �������� �������

    int secretNumber = rand() % 100 + 1;  // ��������� ���������� ����� �� 1 �� 100
    int tries = 0;  // ���������� ��� ������������ ���������� �������
    int guess;  // ���������� ��� �������� ������������� ������������

    cout << "\t����� ���������� � ���� '������ ��� �����'\n\n";

    do
    {
        cout << "������� ���� �������������: ";
        cin >> guess;  // ���� ������������� ������������
        ++tries;  // ���������� ���������� �������

        if (guess > secretNumber)
        {
            cout << "������� ������!\n\n";
        }
        else if (guess < secretNumber)
        {
            cout << "������� �����!\n\n";
        }
        else
        {
            cout << "\n���������! �� ������� ����� �� " << tries << " �������!\n";
        }

    } while (guess != secretNumber);  // ���� ������������ �� ��� ���, ���� ������������� �� �������� � ���������� ������

    return 0;
}
