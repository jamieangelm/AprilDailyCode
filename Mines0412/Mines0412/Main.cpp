//Jamie Martinez
//TJ Martinez

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char playerpick;
char cpupick;

void Computer();

int main() {

	cout << "Welcome to Rock (r), Paper (p), Scissors (s), Lizard (l), Spock (k)!" << endl;
	
	srand(time(NULL));
	while (true) {
	
		cout << "3, 2, 1... Make a selection" << endl;
		cout << "Player 1: ";
		cin >> playerpick;
		Computer();
		if (playerpick == 'r' && cpupick == 's')
			cout << "Rock beats Scissors!  Player 1 wins!" << endl;
		else if (playerpick == 'r' && cpupick == 'l')
			cout << "Rock beats Lizard!  Player 1 wins!" << endl;
		else if (playerpick == 'r' && cpupick == 's')
			cout << "Spock beats Rock!  CPU wins!" << endl;
		else if (playerpick == 'r' && cpupick == 'p')
			cout << "Paper beats Rock!  CPU wins!" << endl;
		else if (playerpick == 'r' && cpupick == 'r')
			cout << " Rock ties Rock.  Nobody wins!" << endl;
		else if (playerpick == 'p' && cpupick == 'r')
			cout << "Paper beats Rock!  Player 1 wins!" << endl;
		else if (playerpick == 'p' && cpupick == 's')
			cout << "Scissors beat Paper!  CPU wins!" << endl;
		else if (playerpick == 'p' && cpupick == 'k')
			cout << "Paper beats Spock!  Player 1 wins!" << endl;
		else if (playerpick == 'p' && cpupick == 'l')
			cout << "Lizard beats Paper!  CPU wins!" << endl;
		else if (playerpick == 'p' && cpupick == 'p')
			cout << "Paper ties Paper!  Nobody wins!" << endl;
		else if (playerpick == 's' && cpupick == 'r')
			cout << "Rock beat Scissors! CPU wins!" << endl;
		else if (playerpick == 's'&& cpupick == 'p')
			cout << "Scissors beat Paper!  Player 1 wins!" << endl;
		else if (playerpick == 's' && cpupick == 'l')
			cout << "Scissors beat Lizard!  Player 1 wins!" << endl;
		else if (playerpick == 's' && cpupick == 'k')
			cout << "Spock beats Scissors!  CPU wins!" << endl;
		else if (playerpick == 's' && cpupick == 's')
			cout << "Spock ties Spock!  Nobody wins!" << endl;
		else if (playerpick == 'l' && cpupick == 'r')
			cout << "Rock beats Lizard!  CPU wins!" << endl;
		else if (playerpick == 'l' && cpupick == 'p')
			cout << "Lizard beats Paper!  Player 1 wins!" << endl;
		else if (playerpick == 'l' && cpupick == 's')
			cout << "Scissors beat Lizard!  CPU wins!" << endl;
		else if (playerpick == 'l' && cpupick == 'k')
			cout << "Lizard beats Spock!  Player 1 wins!" << endl;
		else if (playerpick == 'l' && cpupick == 'l')
			cout << "Lizard ties Lizard!  Nobody wins!" << endl;
		else if (playerpick == 'k' && cpupick == 'r')
			cout << "Spock beats Rock!  Player 1 wins!" << endl;
		else if (playerpick == 'k' && cpupick == 'p')
			cout << "Paper beats Spock!  CPU wins!" << endl;
		else if (playerpick == 'k' && cpupick == 's')
			cout << "Spock beats Scissors!  Player 1 wins!" << endl;
		else if (playerpick == 'k' && cpupick == 'l')
			cout << "Lizard beats Spock!  CPU wins!" << endl;
		else if (playerpick == 'k' && cpupick == 'k')
			cout << "Spock ties Spock!  Nobody wins!" << endl;
		else
			cout << "That can't happen." << endl;
	}
}

void Computer() {
	int num = rand() % 100 + 1;
	if (num <= 20) {
		cout << "CPU: Rock" << endl;
		cpupick = 'r';
	}
	else if (num > 21 && num <= 40) {
		cout << "CPU: Paper" << endl;
		cpupick = 'p';
	}
	else if (num > 41 && num <= 60) {
		cout << "CPU: Scissors" << endl;
		cpupick = 's';
	}
	else if (num > 61 && num <= 80) {
		cout << "CPU: Lizard" << endl;
		cpupick = 'l';
	}
	else {
		cout << "CPU: Spock" << endl;
		cpupick = 'k';
	}
}