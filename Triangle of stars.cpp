#include <iostream>
using namespace std;

int main()
{
	int row = 1, star = 1;

	while (row < 5) {
		while (star <= row) {
			cout << "* ";
			star++;
		}
		cout << endl;
		star = 1;
		row++;
	}
	return 0;
}