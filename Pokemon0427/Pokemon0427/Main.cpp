#include <iostream>
using namespace std;

void Attack(double level, double power, double attack, double defense, double modifier);

double main() {

	double damage = 0;
	double level = 0;
	double power = 0;
	double attack = 0;
	double defense = 0;
	double modifier = 0;

	cout << "Enter level" << endl;
	cin >> level;
	cout << "Enter power" << endl;
	cin >> power;
	cout << "Enter attack" << endl;
	cin >> attack;
	cout << "Enter defense" << endl;
	cin >> defense;
	cout << "Enter modifier" << endl;
	cin >> modifier;

	Attack(level, power, attack, defense, modifier);

	cout << Attack(level, power, attack, defense, modifier) << endl;
	
}

void Attack(double level, double power, double attack, double defense, double modifier) {

	double damage = 0;
	double level = 0;
	double power = 0;
	double attack = 0;
	double defense = 0;
	double modifier = 0;

	double damage = ((((2 * level / 5 + 2)*power*(attack / defense)) / 50 + 2)*modifier);

	return damage;

}