#include <iostream>
using namespace std;

int main()
{
	int number;
	number = 25;
	int* first_pointer = nullptr;
	first_pointer = &number;

	*first_pointer = 40;

	cout << "number: " << number << endl;
	cout << "*first_pointer: " << *first_pointer << endl;
	cout << "first_pointer (address): " << first_pointer << endl;

	return 0;
}