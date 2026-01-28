#include <iostream>
using namespace std;

int main()
{
	int pin = 4321, answer, yn;
	do {
		do {
			cout << "What is the pin: ";
			cin >> answer;
		} while (answer != pin);
		cout << "Do you want to unlock your phone (1 for yes, 0 for no): ";
		cin >> yn;
	} while (yn != 0);
	return 0;
}