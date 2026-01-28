#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 8; j++)
		{
			if (n < 32)
			{
				cout << n << "\t";
			}
			n++;
		}
		cout << endl;
	}
	return 0;
}