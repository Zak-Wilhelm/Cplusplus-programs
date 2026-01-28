#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 25;
	int* first_pointer = &number;
	cout << "The value of number: " << number << endl;
	cout << "The address of number: " << &number << endl;
	cout << "The pointer stores: " << first_pointer << endl;
	cout << "The value of the pointer: " << *first_pointer << endl;

	return 0;
}