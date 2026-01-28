#include <iostream>
using namespace std;

int totalsteps;
int main()
{
	for (int i = 1; i < 8; i++)
	{
		int day = 0;
		float average = 0;
		cout << "how many steps did you walk today: ";
		cin >> day;
		totalsteps = totalsteps + day;
		if (i == 7) {
			average = totalsteps / 7;
			cout << average << endl;
		}
	}
	cout << totalsteps << endl;
	return 0;
}