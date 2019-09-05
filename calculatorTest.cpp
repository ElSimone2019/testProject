//Brings in dependencies
#include <iostream>
#include <iomanip>

//Stops the need to type std:: before statements
using namespace std


int main() {
	bool closeMenu = false;

	do
	{
		cout << "Type stop to close the program";
		cin >> closeMenu;

	} while (closeMenu != true);

}