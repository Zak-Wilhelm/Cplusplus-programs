#include <iostream>
using namespace std;

int main()
{
	int fnum = 11, snum = 21;
	int* fpointer = &fnum;
	int* spointer = &snum;

	cout << "The sum of the first number and the second number is: " << *fpointer + *spointer;
	return 0;
}