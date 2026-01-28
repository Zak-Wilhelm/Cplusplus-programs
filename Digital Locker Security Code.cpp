#include <iostream>
using namespace std;

bool is_strong_code(int code);

int main()
{
	int code;
	cout << "Input the four digit locker combination: ";
	cin >> code;

	if (is_strong_code(code) != false)
	{
		cout << "Code is strong";
	}
	else
	{
		cout << "Code is weak";
	}
	return 0;
}

bool is_strong_code(int code)
{
	int sum = 0, fdigit, ldigit;
	ldigit = code % 10;
	for (int i = 1; i < 5; i++)
	{
		sum = code % 10 + sum;
		fdigit = code;
		code = code / 10;
	}
	if (sum % 2 == 0 && fdigit != ldigit)
	{
		return true;
	}
	else
	{
		return false;
	}
}