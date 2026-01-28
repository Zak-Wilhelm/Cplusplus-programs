#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	for (int i = 1; i < 5; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << n++ << " ";
		}
		n = 1;
		cout << endl;
	}
	return 0;
}