#include <iostream>
using namespace std;

float calculate_bill(int units);

int main()
{
	int units, total;
	cout << "How many units(kWh) did you use: ";
	cin >> units;

	total = calculate_bill(units);

	cout << "The total costs for the units you used is: " << total;
	return 0;
}

float calculate_bill(int units)
{
	if (units < 101)
	{
		return units * 1.5;
	}
	else if (units > 100 && units < 301)
	{
		return units * 2;
	}
	else if (units > 300 && units < 501)
	{
		return units * 3;
	}
	else
	{
		return units * 5;
	}
}