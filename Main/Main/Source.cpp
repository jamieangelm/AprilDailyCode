#include <iostream>
#include <ctime>
using namespace std;
int main() { //begin main

	srand(time(NULL));
	int num;

	for (int i = 0; i < 7; i++) { //random number start

		num = rand() % 10 + 1;
		cout << num << endl;

		for (int i = 0; i < 7; i++) { //begin array
			string inventory[7];

			inventory[0] = "S";
			inventory[1] = "P";
			inventory[2] = "E";
			inventory[3] = "C";
			inventory[4] = "I";
			inventory[5] = "A";
			inventory[6] = "L";

		} //array end
	} //random number end
} //end main
