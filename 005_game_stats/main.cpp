#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\n����: " << score << endl;
	cout << "����������: " << distance << endl;
	cout << "������ �����: " << playAgain << endl;
	//skipping shieldsUp since you don't generally print Boolean values
	cout << "�����: " << lives << endl;
	cout << "������������ �����: " << aliensKilled << endl;
	cout << "����������� ���������: " << engineTemp << endl;

	int fuel;
	cout << "\n������� �������? ";
	cin >> fuel;
	cout << "�������: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	
	return 0;
}