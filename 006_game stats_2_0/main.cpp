#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	unsigned int score = 5000;
	cout << "����: " << score << endl;

	//��������� �������� ����������
	score = score + 100;
	cout << "����: " << score << endl;

	//��������������� �������� ������������
	score += 100;
	cout << "����: " << score << endl;

	//��������� ����������
	int lives = 3;
	++lives;
	cout << "�����: " << lives << endl;

	lives = 3;
	lives++;
	cout << "�����: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "�����, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "�����, bonus = " << lives << ", " << bonus << endl;

	//������������� ������������
	score = 4294967295;
	cout << "\n����: " << score << endl;
	cout << "������������� ������������\n";
	++score;
	cout << "����: " << score << endl;

	return 0;
}