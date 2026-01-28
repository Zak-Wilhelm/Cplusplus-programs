#include <iostream>
using namespace std;

int greater_num(int fnum, int snum);

int main()
{
	int n, m;
	cout << "Enter two intergers: ";
	cin >> n, cin >> m;

	int large = greater_num(n, m);

	cout << "The larger of the two numbers is: " << large;
	return 0;
}

int greater_num(int fnum, int snum)
{
	int large = snum;
	if (fnum > snum)
	{
		large = fnum;
	}
	return large;
}