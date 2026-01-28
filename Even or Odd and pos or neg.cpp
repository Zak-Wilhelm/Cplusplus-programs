#include <iostream>
using namespace std;

int evenodd(int num);

int posneg(int num);

int main()
{
	int n;
	cout << "Enter an Integer: ";
	cin >> n;

	int evennum = evenodd(n);
	int posnum = posneg(n);

	if (evennum == 1 && posnum == 1)
	{
		cout << "The integer is even and positive.";
	}
	else if (posnum == 0) 
	{
		cout << "The integer is zero.";
	}
	else if (evennum == 1 && posnum == -1)
	{
		cout << "The integer is even and negative.";
	}
	else if (evennum == 0 && posnum == 1)
	{
		cout << "The integer is odd and positive.";
	}
	else {
		cout << "The integer is odd and negative.";
	}
	return 0;
}

int evenodd(int num)
{
	int eonum = 0;
	if (num % 2 == 0)
	{
		eonum = 1;
	}
	return eonum;
}

int posneg(int num)
{
	int pnnum = 0;
	if (num > 0)
	{
		pnnum = 1;
	}
	else if (num < 0) {
		pnnum = -1;
	}
	return pnnum;
}