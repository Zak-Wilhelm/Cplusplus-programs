#include <iostream>
using namespace std;

int main()
{
	int n, num;
	double sum = 0;
	cout << "How many numbers are we averaging: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << "What is the " << i << " number: ";
		cin >> num;
		sum = num + sum;
	}
	cout << sum / n;
	return 0;
}