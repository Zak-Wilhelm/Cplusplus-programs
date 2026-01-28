#include <iostream>
using namespace std;

int main()
{
	int array[] = { 1, 2, 3, 4, 5};
	int size = 5;
	int subarrays;

	cout << "How long are the subarrays of the main array: ";
	cin >> subarrays;

	int index = 0;

	while (index < size)
	{
		cout << "[ ";
		for (int count = 0; count < subarrays && index < size; count++)
		{
			cout << array[index] << " ";
			index++;
		}
		cout << "]";
	}
	return 0;
}