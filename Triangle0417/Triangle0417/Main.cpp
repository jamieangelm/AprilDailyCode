/* CSCI 261 A02: Triangles
* Author: Jose Medina, Jamie Martinez
*
* Add more complete description here...
*/

#include <iostream>
#include <ctime>
#include <math.h>// For cin, cout, etc.
using namespace std;  // For standard namespace 

int main() {
	// PART I: INSERT YOUR CODE BELOW HERE

	srand(time(NULL));

	int x1 = 0;
	int x2 = 0;
	int y1 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;
	int side1;
	int side2;
	int side3;
	int perimeter;
	int area;
	

		x1 = rand() % 20 - 10;
	cout << "first point is "<< x1 << endl;
		y1 = rand() % 20 - 10;
	cout << "second point is "<< y1 << endl;
	


	cout << "Enter two more numbers" << endl;
	cin >> x2;
	cin >> y2;
	cout << "Your first point is " << x2 << endl;
	cout << "Your second point is " << y2 << endl;

	cout << "Enter two more numbers" << endl;
	cin >> x3;
	cin >> y3;
	cout << "Your first point is " << x3 << endl;
	cout << "Your second point is " << y3 << endl;


	// PART I INSERT YOUR CODE ABOVE HERE
	// PART II: INSERT YOUR CODE BELOW HERE

	side1 = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	cout << "the first side length is " << side1 << endl;

	side2 = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
	cout << "the second side length is " << side2 << endl;

	side3 = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	cout << "the third side length is " << side3 << endl;

	perimeter = (side1 + side2 + side3)/2;
	cout << "the perimeter is " << perimeter << endl;

	area = sqrt(perimeter*(perimeter - side1)*(perimeter - side2)*(perimeter - side3));
	cout << "the area is " << area << endl;

	// PART II INSERT YOUR CODE ABOVE HERE
	// PART III INSERT YOUR CODE BELOW HERE




	// PART III INSERT YOUR CODE ABOVE HERE

	return 0;	 // signals the operating system that our program ended OK.
}