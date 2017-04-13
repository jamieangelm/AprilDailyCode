#include <iostream> 
#include <windows.h>
#include <string>
using namespace std;
int main() {

	string input;
	string item[1]; 

	if (item[0].compare("sword") != 0)   
		cout << "do you want the magical sochoeun sword?" << endl;
	if (input.compare("sword") == 0) { 
		item[0] = "yes";  
		cout << "You grabbed the sochoeun sword!" << endl;
		system("Color 4B");
	}
}