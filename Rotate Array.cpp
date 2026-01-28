#include <iostream>
using namespace std;

int main()
{
	int numbers[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = 7;
	int rotate = 3;
	int lelemnet;

	for (int step = 1; step <= rotate; step++)
	{
		lelemnet = numbers[size - 1];

		for (int index = size - 1; index > 0; index--)
		{
			numbers[index] = numbers[index - 1];
		}
		numbers[0] = lelemnet;
	}
	for (int index = 0; index < size; index++)
	{
		cout << numbers[index] << " ";
	}
	return 0;
}