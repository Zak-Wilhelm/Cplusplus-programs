#include <iostream>
using namespace std;

int main()
{
	char voco;

	cout << "Input any lowercasse letter: ";
	cin >> voco;

	if (voco >= 'a' && voco <= 'z') {
		switch (voco) {
			case 'a':
			case 'e':
			case 'u':
			case 'i':
			case 'o':
				cout << "Vowel";
				break;
			default:
				cout << "Consonant";
		}
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}