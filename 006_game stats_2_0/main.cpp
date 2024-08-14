#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	unsigned int score = 5000;
	cout << "счет: " << score << endl;

	//изменение значения переменной
	score = score + 100;
	cout << "счет: " << score << endl;

	//комбинированный оператор присваивания
	score += 100;
	cout << "счет: " << score << endl;

	//операторы инкремента
	int lives = 3;
	++lives;
	cout << "жизни: " << lives << endl;

	lives = 3;
	lives++;
	cout << "жизни: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "жизни, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "жизни, bonus = " << lives << ", " << bonus << endl;

	//целочисленное переполнение
	score = 4294967295;
	cout << "\nсчет: " << score << endl;
	cout << "целочисленное переполнение\n";
	++score;
	cout << "счет: " << score << endl;

	return 0;
}