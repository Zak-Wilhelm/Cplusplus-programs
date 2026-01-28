#include <iostream>
using namespace std;

int find_sum(int fnum, int snum);

int find_product(int fnum, int snum);

int main()
{
	int n, m;
	cout << "Enter two Integers: ";
	cin >> n, cin >> m;

	int sum = find_sum(n, m);
	int product = find_product(n, m);

	cout << "The sum of " << n << " and " << m << " is: " << sum << endl;
	cout << "The product of " << n << " and " << m << " is: " << product;
	return 0;
}

int find_sum(int fnum, int snum)
{
	return fnum + snum;
}

int find_product(int fnum, int snum)
{
	return fnum * snum;
}