#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 9; i++)
	{
		for (int j = 1; j < 9; j++)
		{
			if (j % 2 != 0 && i % 2 != 0)
			{
				cout << "#";
			}
			else if (j % 2 == 0 && i % 2 == 0)  {
				cout << "#";
			}
			else {
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}