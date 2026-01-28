#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "What is your grade: ";
	cin >> grade;
	grade = grade / 10;

	switch (grade) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "F";
			break;
		case 6:
			cout << "D";
			break;
		case 7:
			cout << "C";
			break;
		case 8:
			cout << "B";
			break;
		case 9:
		case 10:
			cout << "A";
			break;
		default:
			cout << "Score exceedes 109";
	}
	return 0;
}