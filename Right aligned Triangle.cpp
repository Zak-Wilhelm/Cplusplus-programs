#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 5; j >= 1; j--)
		{
			if (j == i || j < i)
			{
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}