#include <iostream>
#include <string>
using namespace std;

int main()
{
	int light_color;
	string zz;

	cout << "what is the light color (1 is green, 2 is yellow, and 3 is red): ";
	cin >> light_color;

	switch (light_color)
	{
		case 1:
			cout << "GO";
			break;
		case 2:
			cout << " is it safe to stop: ";
			cin >> zz;
			if (zz == "no") {
				cout << "proceed with caution";
			}
			else {
				cout << "stop immediately";
			}
			break;
		case 3:
			cout << "Is there an emergency vehicle: ";
			cin >> zz;
			if (zz == "yes") {
				cout << "Make room for the emergency vehicle: ";
			}
			else {
				cout << "Stop";
			}
			break;
		default:
			cout << "invalid input";
	}
	return 0;
}