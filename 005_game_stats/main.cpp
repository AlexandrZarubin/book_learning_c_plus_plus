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

	cout << "\nсчет: " << score << endl;
	cout << "расстояние: " << distance << endl;
	cout << "играть снова: " << playAgain << endl;
	//skipping shieldsUp since you don't generally print Boolean values
	cout << "жизни: " << lives << endl;
	cout << "инопланетяне Убиты: " << aliensKilled << endl;
	cout << "температура двигателя: " << engineTemp << endl;

	int fuel;
	cout << "\nСколько топлива? ";
	cin >> fuel;
	cout << "топливо: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	
	return 0;
}