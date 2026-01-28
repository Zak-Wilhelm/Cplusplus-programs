#include <iostream>
using namespace std;

int main()
{
	const int r = 3;
	const int c = 3;
	int n = 1;
	double hp, evp, rp, t;
	int ht = 0, evt = 0, rt = 0;

	cout << "What is the price rate for a handicap spot: ";
	cin >> hp;
	cout << "What is the price rate for an eletric vehicle spot: ";
	cin >> evp;
	cout << "What is the price rate for a regular spot: ";
	cin >> rp;

	cout << "enter 4 occupied spots (row col):\n";
	int or1, oc1, or2, oc2, or3, oc3, or4, oc4;
	cin >> or1 >> oc1;
	cin >> or2 >> oc2;
	cin >> or3 >> oc3;
	cin >> or4 >> oc4;

	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			if (i == or1 && j == oc1 || i == or2 && j == oc2 || i == or3 && j == oc3 || i == or4 && j == oc4) {
				cout << "X ";
			}
			else {
				if (n == 3) {
					cout << "EV ";
					evt++;
				}
				else if (i == 1) {
					cout << "H ";
					ht++;
				}
				else {
					cout << "R ";
					rt++;
				}
			}
			n++;
		}
		cout << endl;
		n = 1;
	}

	ht = 2 - ht;
	evt = 3 - evt;
	rt = 4 - rt;

	t = ht * hp + evt * evp + rt * rp;
	cout << "Spots occupied by Handicap: " << ht << endl;
	cout << "Spots occupied by electric vehicles: " << evt << endl;
	cout << "Spots occupied by regulars: " << rt << endl;
	cout << "Total revenue is: " << t;
	return 0;
}