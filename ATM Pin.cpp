#include <iostream>
using namespace std;

int main()
{
	int PIN;

	do
	{
		cout << "What is your Pin: ";
		cin >> PIN;
	} while (PIN != 1234);
	cout << "Access granted";
	return 0;
}