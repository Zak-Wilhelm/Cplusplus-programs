#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "What is the number: ";
	cin >> num;

	int* pointer = &num;

	if (*pointer % 2 == 0)
	{
		cout << "The number is even";
	}
	else
	{
		cout << "The number is odd";
	}
	return 0;
}