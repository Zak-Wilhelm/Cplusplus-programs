#include <iostream>
using namespace std;

int main()
{
	int number, snum;
	number = 25;
	snum = 21;
	int* first_pointer;
	int* second_pointer;
	first_pointer = &number;
	second_pointer = &snum;

	cout << "Value of number: " << number << endl;

	cout << "Address of number: " << &number << endl;

	cout << "Pointer second_pointer stores: " << first_pointer << endl;

	cout << "Value at addresss: " << *first_pointer << endl;

	cout << "Value of number: " << snum << endl;

	cout << "Address of number: " << &snum << endl;

	cout << "Pointer second_pointer stores: " << second_pointer << endl;

	cout << "Value at addresss: " << *second_pointer << endl;

	return 0;
}