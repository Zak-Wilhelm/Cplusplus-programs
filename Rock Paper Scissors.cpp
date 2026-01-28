#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	char rps, yy;
	int comp, computer = 0, i = 0, human = 0, winner = 0;

	do {
		while (winner % 2 != 1) {
			cout << "Enter an odd match length: ";
			cin >> winner;
			if (winner % 2 != 1) {
				cout << "Enter an odd match length: ";
				cin >> winner;
			}
		}
		winner = winner / 2 + 1;
		while (computer < winner && human < winner) {
			comp = rand() % 3;
			cout << "Choose rock (r), paper (p), or scissor (s): ";
			cin >> rps;
			switch (comp) {
			case 0:
				if (rps == 'r' || rps == 'R') {
					cout << "It is a draw" << endl;
				}
				else if (rps == 'p' || rps == 'P') {
					cout << "You win" << endl;
					human = human + 1;
				}
				else if (rps == 's' || rps == 'S') {
					cout << "You lose" << endl;
					computer = computer + 1;
				}
				else {
					cout << "Invalid input" << endl;
					computer = computer + 1;
				}
				break;
			case 1:
				if ('r' == rps || 'R' == rps) {
					cout << "You Lose" << endl;
					computer = computer + 1;
				}
				else if ('p' == rps || 'P' == rps) {
					cout << "It is a draw" << endl;
				}
				else if ('s' == rps || 'S' == rps) {
					cout << "You win" << endl;
					human = human + 1;
				}
				else {
					cout << "Invalid input" << endl;
					computer = computer + 1;
				}
				break;
			case 2:
				if ('r' == rps || 'R' == rps) {
					cout << "You Win" << endl;
					human = human + 1;
				}
				else if ('p' == rps || 'P' == rps) {
					cout << "You Lose" << endl;
					computer = computer + 1;
				}
				else if ('s' == rps || 'S' == rps) {
					cout << "It is a draw" << endl;
				}
				else {
					cout << "Invalid input" << endl;
					computer = computer + 1;
				}
				break;
			default:
				cout << "Invalid Computer input" << endl;
			}
		}
		cout << "Do you want to play again (y for yes, n for no): ";
		cin >> yy;
	} while (yy == 'y' || yy == 'Y');
	return 0;
}