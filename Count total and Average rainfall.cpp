#include <iostream>
using namespace std;

int main() 
{
	int rainfall, i = 1, total = 0;

	for ( int i = 0; i < 7; i++) {
		cout << "How much rainfall in milimeters today: ";
		cin >> rainfall;
		total = total + rainfall;
	}
	cout << "Total rainfall for the week: " << total << endl;
	cout << "Average rainfall for the week: " << total / 7 << endl;
	return 0;
}