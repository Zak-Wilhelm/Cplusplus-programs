#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	cout << "Random: " << rand() << endl;
	cout << "Range: 0 to " << RAND_MAX << endl;

	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;

	return 0;
}