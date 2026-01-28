#include <iostream>
using namespace std;

int main()
{
	int n = 1, m = 1;
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << n * m << "\t";
			n++;
		}
		n = 1;
		m++;
		cout << endl;
	}
	return 0;
}