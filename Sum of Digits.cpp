#include <iostream>
using namespace std;

int sumall(int num);

int main()
{
	int n;
	cout << "Enter any number: ";
	cin >> n;

	int total = sumall(n);

	cout << "The total sum of all the digits of " << n << " is: " << total;
	return 0;
}

int sumall(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum = num % 10 + sum;
		num = num / 10;
	}
	return sum;
}