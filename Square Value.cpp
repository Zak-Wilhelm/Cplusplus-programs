#include <iostream>
using namespace std;

int square_value(int num);

int main()
{
	int n;

	cout << "Choose any integer: ";
	cin >> n;

	int total_number = square_value(n);

	cout << "The square of " << n << " is: " << total_number;
	
	return 0;
}

int square_value(int num)
{
	int squared = num * num;
	return squared;
}