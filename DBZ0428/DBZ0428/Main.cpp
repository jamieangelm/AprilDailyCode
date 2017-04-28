#include <iostream>
using namespace std;

void Nuke(double baseattackstat, double orbamount, double damage);

int main() {

	double baseattackstat = 0;
	double orbamount = 0;
	double damage = 0;

	cout << "Enter base attack stat" << endl;
	cin >> baseattackstat;
	cout << "Enter orb amount" << endl;
	cin >> orbamount;

	Nuke(baseattackstat, orbamount, damage);

}

void Nuke(double baseattackstat, double orbamount, double damage) {

	double damage = (baseattackstat*(1+(0.3 * orbamount)))+3000;

	cout << damage << endl;

}