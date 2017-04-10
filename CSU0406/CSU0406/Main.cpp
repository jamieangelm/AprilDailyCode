#include <iostream>
void show_menu();
//Print the help menu, as shown above.
void show_title_given_year(int year);
//Print the title for that year.Hint: Use a switch statement.
void show_age_given_index(int index);
//Print the age of the book for that index.Hint: Use an array.
int input;
void menu;
void year;
void index;
int num;
using namespace std;
int main() {

	while (input != 'q')
		cout << "request:" << endl;
	cin >> input;
	if (input == 'q') {
		return 0;
	}

	else if (input = 'h')
		show_menu();

	else if (input = 'i')
		show_age_given_index();
	else if (input == 'y')
		show_title_given_year();

}//end of main

void show_menu() {
	cout << "your options are.." << endl;
	cout << "q to Quit" << endl;
	cout << "y to enter a year" << endl;
	cout << "i to enter an index" << endl;


}

void show_title_given_year(int year) {
	if (year == 1900)
		cout << "The Wonderful Wizard of Oz" << endl;
	if (year == 1904)
		cout << "The Marvelous Land of Oz" << endl;
	if (year == 1907)
		cout << "	Ozma of Oz" << endl;
	if (year == 1908)
		cout << "Dorothy and the Wizard in Oz" << endl;
	if (year == 1909)
		cout << "The Road to Oz" << endl;
	if (year == 1910)
		cout << "The Emerald City of Oz" << endl;
	if (year == 1913)
		cout << "The Patchwork Girl of Oz" << endl;
	if (year == 1914)
		cout << "Tik-Tok of Oz" << endl;
	if (year == 1915)
		cout << "The Scarecrow of Oz" << endl;
	if (year == 1916)
		cout << "Rinkitink in Oz" << endl;
	if (year == 1917)
		cout << "The Lost Princess of Oz" << endl;
	if (year == 1918)
		cout << "The Tin Woodman of Oz" << endl;
	if (year == 1919)
		cout << "The Magic of Oz" << endl;
	if (year == 1920)
		cout << "Glinda of Oz" << endl;
}
void show_age_given_index(int index) {
	int yearsOld[14] = { 117,113,110,109,108,107,104,103,102,101,100,99,98,97 };
	cout << "This book is" << yearsOld[index] << "years old cx" << endl;
}