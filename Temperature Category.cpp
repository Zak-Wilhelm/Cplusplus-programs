#include <iostream>
using namespace std;

int tempcount = 0;
int main()
{
	int temp;
	cout << "What is the temperature is celsius: ";
	cin >> temp;

	if (temp < 15) {
		cout << "cold" << endl;
	}
	else if (temp > 30) {
		cout << "hot" << endl;
	}
	else {
		cout << "warm" << endl;
	}
	tempcount++;
	cout << tempcount;
	return 0;
}