#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	string prps, crps;
	int randnum = rand() % 3;
	cout << "Pick rock, paper, or scissors: ";
	cin >> prps;

	if (randnum == 2) {
		crps = "paper";
	}
	else if (randnum == 1) {
		crps = "rock";
	}
	else {
		crps = "scissors";
	}
	if (prps == "paper") {
		if (crps == "paper") {
			cout << "Paper draw";
		}
		else if (crps == "rock") {
			cout << "You win - paper to rock";
		}
		else {
			cout << "You lose - paper to scissors";
		}
	}
	else if (prps == "rock") {
		if (crps == "paper") {
			cout << "You lose - rock to paper";
		}
		else if (crps == "rock") {
			cout << "rock draw";
		}
		else {
			cout << "You win - rock to scissors";
		}
	}
	else {
		if (crps == "paper") {
			cout << "You win - scissors to paper";
		}
		else if (crps == "rock") {
			cout << "You lose - scissors to rock";
		}
		else {
			cout << "scissors draw";
		}
	}
	return 0;
 }