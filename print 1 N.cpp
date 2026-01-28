#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "When does the program stop counting(n): ";
	cin >> n;

	for (int i = 1; i <= n; i++) 
	{
		cout << i << " ";
	}
	return 0;
}