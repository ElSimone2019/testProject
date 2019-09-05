#include <iostream>
//Adding modules
#include <iomanip>


//Stops the need to add std before each statement
using namespace std;

//Program starts and ends here, however it can pull other functions out of the main() loop
int main() {
	//Output a simple message using cout
	cout << "Hello World";

	//Output a new line using \n
	cout << "Hello World \n";

	//Commenting code

	//Declaring a Variable
	int myAge = 0;

	//Getting input off the user & saving to a variable
	cin >> myAge;

	//Example Program
	int age = 0;
	cout << "Please type in your age";
	cin >> age;

	//Calculations -- Calculator example
	float value1 = 0;
	float value2 = 0;
	float theAnswer = 0;

	cout << "Please type in value 1\n";
	cin >> value1;
	cout << "\n";
	
	cout << "Please type in value 2\n";
	cin >> value2;
	cout << "\n";

	theAnswer = value1 * value2;

	cout << theAnswer;
	cout << "\n";

	//Formatting Numbers example
	float amountOfHours = 0;
	const float speed = 1.4;
	float answer = 0;

	cout << "Please type in hours";
	cout << "\n";
	cin >> amountOfHours;
	answer = amountOfHours * speed;
	cout << "The answer is " << setprecision(2) << fixed << answer;
	cout << "\n";
	system("pause");
	return 0;

	//More complex output by mixing strings & variables example
	/*float amountOfHours = 0;
	const float speed = 1.4;
	float answer = 0;*/

	cout << "Please type in hours";
	cout << "\n";
	amountOfHours = amountOfHours * speed;
	cout << "When crawling for " << amountOfHours << " hours at a speed of " << speed << " yards per hour the snail will crawl " << answer << " yards";
	cout << "\n";

	//IF statement example
	int position = 0;

	cout << "Please type in the race position";
	cout << "\n";
	cin >> position;

}