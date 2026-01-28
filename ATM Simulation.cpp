#include <iostream>
using namespace std;

int main()
{
	int options, balance = 1000;
	float transaction;

	do
	{
		cout << "Options" << endl;
		cout << "1. Deposit money" << endl;
		cout << "2. Withdraw money" << endl;
		cout << "3. Check Balance" << endl;
		cout << "4. Exit" << endl;
		cout << "What is your choice: ";
		cin >> options;

		switch (options)
		{
			case 1:
				cout << "How much money do you want to deposit: ";
				cin >> transaction;
				balance = balance + transaction;
				break;
			case 2:
				cout << "How much money do you want to withdraw: ";
				cin >> transaction;
				if (transaction > balance)
				{
					cout << "Withdraw failed" << endl;
				}
				else {
					cout << "Successful withdraw" << endl;
					balance = balance - transaction;
					cout << "Remaining balance is " << balance << endl;
				}
				break;
			case 3:
				cout << balance;
				break;
			case 4:
				cout << "Exiting" << endl;
				break;
			default:
				cout << "Invalid option" << endl;
		}
	} while (options != 4);
	return 0;
}