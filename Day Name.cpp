#include <iostream>
using namespace std;

int main()
{
	int day_num;

	cout << "Insert any day number (1 - mon, 2 - tue, 3 - wed): ";
	cin >> day_num;

	switch (day_num) {
		case 1:
			cout << "Monday/n";
			break;
		case 2:
			cout << "Tuesday/n";
			break;
		case 3:
			cout << "Wednesday/n";
			break;
		default:
			cout << "invalid day number";
	}
	return 0;
}