#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty 
	{
		NOVICE, 
		EASY, 
		NORMAL, 
		HARD, 
		UNBEATABLE 
	};
	difficulty myDifficulty = EASY;

	enum shipCost 
	{
		FIGHTER_COST = 25,
		BOMBER_COST,
		CRUISER_COST = 50
	};
	shipCost myShipCost = BOMBER_COST;
	cout << "\nМодернизация моего корабля до крейсера будет стоить "<< (CRUISER_COST - myShipCost) << " Ресурсные точки.\n";

	return 0;
}
