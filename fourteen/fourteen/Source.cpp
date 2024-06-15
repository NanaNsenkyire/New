#include <iostream>

using namespace std;

int main() {

//do-while loop

	string runAgain;
	do {

		int num1, num2;
		cout << "Give me two numbers to add" << endl;
		cin >> num1 >> num2;
		cout << "Numbers added: " << (num1 + num2) << endl;
		cout << "Would you like to run the program again? Type yes or no:" << endl;
		cin >> runAgain;
	} while (runAgain == "yes");








	return 0;
}