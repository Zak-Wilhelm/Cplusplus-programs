#include <iostream>
using namespace std;

int totalfee = 0;
int main()
{
	int books;
	
	cout << "How many books are late: ";
	cin >> books;

	for (int i = 1; i < books + 1; i++)
	{
		int days;
		float fee;
		cout << "How many days late is book " << i << ": ";
		cin >> days;
		if (days < 3) {
			fee = 5;
		} else if (days > 3 && days < 7) {
			fee = 11;
		} else if (days > 7 && days < 14) {
			fee = 25;
		}
		else {
			fee = days * 3;
		}
		totalfee = totalfee + fee;
	}
	cout << "The total fine for all your books is " << totalfee;
	return 0;
}