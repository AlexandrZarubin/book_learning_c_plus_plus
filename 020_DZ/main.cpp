/*
1. ���������� ��������� Menu Chooser �� ���� �����, ���������� ���������
������ ��������� � ���� ������������. ��� ���� ����������� �������� � ����������
���� i nt.

2. ������� ������ � ��������� �����:
intx=O:
while (�) x==false
{
++�:
cout << � << endl :

3. �������� ����� ������ ��������� Guess �� Number, ��� ��������� � �����
�������� ������: ����� �������� �����, � ��������� ������ ��� �������.
*/



#include <iostream>
using namespace std;
//#define Task1
#define Task3
// ���������� ������������ ��� ������� ���������
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
    case EASY:  // ���������� �������� �� ������������
        cout << "You picked Easy.\n";
        break;
    case NORMAL:  // ���������� �������� �� ������������
        cout << "You picked Normal.\n";
        break;
    case HARD:  // ���������� �������� �� ������������
        cout << "You picked Hard.\n";
        break;
    default:
        cout << "You made an illegal choice.\n";
    }

#endif // Task1
#ifdef Task3
    srand(static_cast<unsigned int>(time(0)));  // ������������� ���������� ��������� ����� �� ������ �������� �������

    int secretNumber;
    cout << "�������� ����� �� 1 �� 100, ����� ��������� ��� ������: ";
    cin >> secretNumber;

    // ���������, ����� ����� ���� � ���������� ���������
    if (secretNumber < 1 || secretNumber > 100) {
        cout << "����� ������ ���� ����� 1 � 100. ��������� ����.\n";
        return 1;
    }

    int low = 1;  // ������ ������� ���������
    int high = 100;  // ������� ������� ���������
    int guess;  // ������������� ����������
    int tries = 0;  // ���������� �������
    char response;  // ����� ������

    cout << "\n��������� ���������� ������� ���� �����.\n";

    do
    {
        guess = low + (rand() % (high - low + 1));  // ��������� ������ ��������� ������������� � ������� ���������
        ++tries;

        cout << "��������� ������������: " << guess << endl;
        cout << "������������� ������� �������, ������� ������ ��� ����������? (v/n/p): ";
        cin >> response;

        if (response == 'v')  // ���� ������������� ������� �������
        {
            high = guess - 1;  // ������ �������� ������
        }
        else if (response == 'n')  // ���� ������������� ������� ������
        {
            low = guess + 1;  // ������ �������� �����
        }
        else if (response == 'p')  // ���� ������������� ������
        {
            cout << "\n��������� ������ ���� ����� �� " << tries << " �������!\n";
        }
        else
        {
            cout << "������������ �����. ����������, ������� '�', '�' ��� '�'.\n";
        }

    } while (response != '�');

#endif // Task3


    return 0;
}
