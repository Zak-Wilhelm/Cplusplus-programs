#include <iostream>
using namespace std;

int main()
{
	// j is the net exchange of passengers
	// x is how long the bus remains below max capacity
	// y is the storing of x, so when x breaks it can be reset
	// z is the number of times max capacity is broken (violations)
	int occupancy = 0, n, c, x = 0, y = 0, z = 0, j = 0;
	cout << "what is the capacity of the bus: ";
	cin >> c;
	cout << "How many stops are we making: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "What was the net change of passengers: ";
		cin >> j;
		occupancy = occupancy + j;
		if (occupancy < 0) {
			cout << "Impossible, occupancy can not go lower than zero" << endl;
			cout << occupancy << endl;
			cout << "what was the net change of passengers: ";
			cin >> occupancy;
		}
		if (occupancy > c) {
			z++;
			if (y < x) {
				y = x;
			}
			x = 0;
		}
		else {
			x++;
		}

	}
	if (occupancy >= c) {
		cout << "Maximum occupancy reached " << occupancy << endl;
	}
	cout << "Number of violations: " << z << endl;
	cout << "Longest safe streak: " << y << endl;
	return 0;
}