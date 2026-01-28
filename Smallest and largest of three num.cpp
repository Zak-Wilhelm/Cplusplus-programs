#include <iostream>
using namespace std;

int find_smallest(int fnum, int snum, int tnum);

int find_largest(int fnum, int snum, int tnum);

int main()
{
	int fnum, snum, tnum;
	cout << "Enter three integers: ";
	cin >> fnum >> snum >> tnum;

	int small = find_smallest(fnum, snum, tnum);
	int large = find_largest(fnum, snum, tnum);

	cout << "The largest is: " << large << endl;
	cout << "The smallest is: " << small << endl;
	return 0;
}

int find_smallest(int fnum, int snum, int tnum)
{
	if (fnum < snum && fnum < tnum)
	{
		return fnum;
	}
	else if (snum < fnum && snum < tnum)
	{
		return snum;
	}
	else {
		return tnum;
	}
}

int find_largest(int fnum, int snum, int tnum)
{
	if (fnum > snum && fnum > tnum)
	{
		return fnum;
	}
	else if (snum > fnum && snum > tnum)
	{
		return snum;
	}
	else {
		return tnum;
	}
}