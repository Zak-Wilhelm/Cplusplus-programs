#include <iostream>
using namespace std;

int main()
{
	int OI = 0;
	int choice;

	do
	{
		cout << "Light switch menu" << endl;
		cout << "1. Turn on the light" << endl;
		cout << "2. Turn off the light" << endl;
		cout << "3. Show light status" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice (1-4): " << endl;
		cin >> choice;

		switch (choice)
		{
			case 1:
				if (OI == 1) {
					cout << "Light is already on";
				}
				else {
					OI = 1;
					cout << "Lights are now on";
				}
				break;
			case 2:
				if (OI == 0) {
					cout << "Light is already off";
				}
				else {
					OI = 0;
					cout << "Lights are now off";
				}
				break;
			case 3:
				if (OI == 1) {
					cout << "Lights are on";
				}
				else {
					cout << "Lights are off";
				}
				break;
			case 4:
				cout << "Exit";
			default:
				cout << "Invalid input";
		}
	} while (choice != 4);
	return 0;
}