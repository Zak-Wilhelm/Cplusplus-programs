#include <iostream>
using namespace std;

int main()
{
	int fnum, snum;
	fnum = 21;
	snum = 11;

	int* fpointer = &fnum;
	int* spointer = &snum;

	if (*spointer > *fpointer)
	{
		cout << "Second number is greater: " << *spointer;
	}
	else {
		cout << "First number is greater: " << *fpointer;
	}
	return 0;
}