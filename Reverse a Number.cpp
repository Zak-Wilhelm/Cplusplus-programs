#include <iostream>
using namespace std;

int main()
{
	int num, snum, rnum = 0;

	cout << "Choose any number: ";
	cin >> num;

	while (num > 0) {
		snum = num % 10;
		rnum = rnum * 10 + snum;
		num = num / 10;
	}

	cout << rnum;
	return 0;
}