#include <iostream>
using namespace std;

int main()
{
	int num, evennum = 0, oddnum = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Enter a number: ";
		cin >> num;
		if (num % 2 == 0) {
			evennum++;
		}
		else {
			oddnum++;
		}
	}
	cout << "Total even numbers: " << evennum << endl;
	cout << "Total odd numbers: " << oddnum << endl;
	return 0;
}