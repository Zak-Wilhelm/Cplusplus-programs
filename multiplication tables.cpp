#include <iostream>
using namespace std;

int main()
{
	int num = 1, snum = 1;
	while (num < 6) {
		while (snum < 6) {
			cout << num * snum << "  ";
			snum++;
		}
		cout << endl;
		num++;
		snum = 1;
	}
	return 0;
}