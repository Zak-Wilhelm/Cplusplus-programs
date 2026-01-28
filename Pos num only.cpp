#include <iostream>
using namespace std;

int main()
{
	int num, sum = 0;

	do
	{
		cout << "Enter a number (0 stops): ";
		cin >> num;
		sum = sum + num;
	} while (num != 0);
	cout << "Thank you!" << endl;
	cout << sum;
	return 0;
}