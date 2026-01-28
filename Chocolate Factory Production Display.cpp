#include <iostream>
using namespace std;

int main()
{
	int n, o, d = 0, m = 0, w = 0;

	cout << "How many rows are there: ";
	cin >> n;
	cout << "How many columns are there: ";
	cin >> o;

	cout << "Chocolate Production Tray (D = Dark, M= Milk, W = White)" << endl;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= o; j++)
		{
			if (j % 2 == 0) {
				cout << "D ";
				d++;
			}
			else if (i % 2 == 0) {
				cout << "M ";
				m++;
			}
			else {
				cout << "W ";
				w++;
			}
		}
		cout << endl;
	}
	cout << "     Summary" << endl;
	cout << "Dark Chocolate: " << d << endl;
	cout << "Milk Chocolate: " << m << endl;
	cout << "White Chocolate: " << w << endl;
	cout << "Total ChocolateL: " << d + m + w;
	return 0;
}