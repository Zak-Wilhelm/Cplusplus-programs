#include <iostream>
using namespace std;

int main()
{
	int num = 0, target;
	int* pointer = &num;
	cout << "What is the target number: ";
	cin >> target;

	while (*pointer != target)
	{
		(*pointer)++;
		cout << "The current value is: " << *pointer << endl;
	}
	cout << "Target reached" << endl;
	return 0;
}