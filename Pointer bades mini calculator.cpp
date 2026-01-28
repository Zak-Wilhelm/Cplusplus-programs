#include <iostream>
using namespace std;

int main()
{
	int num, snum;
	cout << "Enter two numbers: ";
	cin >> num >> snum;

	char operand;
	cout << "Enter an operand(+, - , *, /): ";
	cin >> operand;

	int* pointer = &num;
	int* spointer = &snum;

	switch (operand) {
		case '+':
			cout << "The solution is: " << *pointer + *spointer << endl;
			break;
		case '-':
			cout << "The solution is: " << *pointer - *spointer << endl;
			break;
		case '*':
			cout << "The solution is: " << *pointer * *spointer << endl;
			break;
		case '/':
			cout << "The solution is: " << *pointer / *spointer << endl;
			break;
		default:
			cout << "Invalid operand" << endl;
	}
	return 0;
}