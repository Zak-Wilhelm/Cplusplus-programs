#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	char op;

	cout << "enter first number, opeation, and second number: ";
	cin >> num1 >> op >> num2;

	switch (op)
	{
		case '+': 
			cout << num1 + num2;
			break;
		case'-':
			cout << num1 - num2;
			break;
		case '*':
			cout << num1 * num2;
			break;
		case'/':
			if (num2 == 0) {
				cout << "error division by 0";
			}
			else {
				cout << num1 / num2;
			}
			break;
		default:
			cout << "error";
	}
	return 0;
}