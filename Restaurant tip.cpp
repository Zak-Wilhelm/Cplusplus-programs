#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int yy;
	float bill = 0, tip, total, pseudotip = 0;
	cout << fixed << setprecision(2);

	do {
		do {
			do {
				cout << "How much of a tip do you want to leave (10%, 15%, 20%): ";
				cin >> tip;
				if (tip == 15 || tip == 20) {
					pseudotip = 10;
				}
				else if (tip == 10) {
					pseudotip = 10;
				}
			} while (pseudotip != 10);
			cout << "What is the bill: ";
			cin >> bill;
		} while (bill <= 0);
		total = bill + bill * (tip / 100);
		cout << total << endl;
		cout << "Do you wish to do another bill (1 for yes, 0 for no): ";
		cin >> yy;
	} while (yy != 0);
	return 0;
}