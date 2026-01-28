#include <iostream>
using namespace std;

int floorstraveled;
int main()
{
	const int start = 0;
	char stop = 'a';
	int  currentfloor = 0, minfloor = 0, maxfloor = 0;

	while (stop != 'q')
	{
		int movement;
		cout << "What floor do you want to go to (currently on " << currentfloor << "): ";
		cin >> movement;
		if (movement < 0 && movement < currentfloor)
		{
			movement = movement - currentfloor;
		}
		else if (movement >= 0 && movement < currentfloor) {
			movement = -currentfloor + movement;
		}
		else {
			movement = movement - currentfloor;
		}
			
		currentfloor = currentfloor + movement;
		if (currentfloor < -2 || currentfloor > 10) {
			cout << "invalid move" << endl;
			currentfloor = currentfloor - movement;
			movement = 0;
		}
		if (movement > 0) {
			if (currentfloor > maxfloor) {
				maxfloor = currentfloor;
			}
		}
		else if (movement < 0) {
			if (currentfloor < minfloor)
				minfloor = currentfloor;
		}
		floorstraveled = floorstraveled + abs(movement);
		cout << "Do you wish to stop (if so input q): ";
		cin >> stop;
		if (stop == 'q' || stop == 'Q') {
			cout << "The lowest floor the elevator went to was: " << minfloor << endl;
			cout << "The highest floor the elevator went to was: " << maxfloor << endl;
		}
	}
	cout << "The total floors traveled: " << floorstraveled << endl;
	return 0;
}