#include <iostream>
using namespace std;

int main()
{
	int fnum = 11, snum = 21, temp;
	int* fpointer = &fnum;
	int* spointer = &snum;

	temp = *spointer;
	snum = *fpointer;
	fnum = temp;

	cout << "Now fnum is " << fnum << " and snum is " << snum << endl;
	return 0;
}