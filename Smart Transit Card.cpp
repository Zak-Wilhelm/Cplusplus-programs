#include <iostream>
using namespace std;

float recharge_amount(float amount);
int trip(int options);
int exit_trip(int options);
float fare_calc(int zone_hour, int sec_zone_hour);
void balance_screen(float balance);
void summary(int zonehour, int seczonehour, float cost);
float poor_man(float balance, float cost, int penalty);

int main()
{
	int options, zone_hour = 0, sec_zone_hour = 0, penalty = 0;
	float balance = 0, cost = 0;
	bool ontrip;
	ontrip = false;

	float* point_balance = &balance;
	bool* point_ontrip = &ontrip;
	int* point_zonehour = &zone_hour;

	do {
		cout << "1) Recharge" << endl;
		cout << "2) Tap-in" << endl;
		cout << "3) Tap-out" << endl;
		cout << "4) Fare cost" << endl;
		cout << "5) Show Balance" << endl;
		cout << "6) Show last Trip" << endl;
		cout << "7) Admin/Debug" << endl;
		cout << "8) Exit" << endl;
		cout << "What is your choice: ";
		cin >> options;
		switch (options) {
			case 1:
				balance = recharge_amount(balance);
				break;
			case 2:
				if (ontrip == true) {
					cout << " You are aready in a trip. Please tap out first." << endl;
				}
				else {
					zone_hour = trip(options);
				}
				ontrip = true;
				break;
			case 3:
				if (ontrip == false) {
					cout << "Penalty charge." << endl;
					penalty++;
				}
				else {
					sec_zone_hour = exit_trip(options);
				}
				ontrip = false;
				break;
			case 4:
				cost = fare_calc(zone_hour, sec_zone_hour);
				balance = poor_man(balance, cost, penalty);
				break;
			case 5:
				balance_screen(balance);
				break;
			case 6:
				summary(zone_hour, sec_zone_hour, cost);
				break;
			case 7:
				cout << "[Admin Debug]" << endl;
				cout << *point_balance << endl;
				cout << &point_balance << endl;
				cout << *point_ontrip << endl;
				cout << &point_ontrip << endl;
				cout << *point_zonehour << endl;
				cout << &point_zonehour << endl;
				break;
			case 8:
				break;
			default:
				cout << "Invalid switch input" << endl;
				break;
		}
	} while (options != 8);
	return 0;
}

float recharge_amount(float amount)
{
	float total = 0;
	while (total <= 0)
	{
		cout << "How much should be added to your balance: ";
		cin >> total;
		if (total <= 0)
		{
			cout << "Invalid input. Try again.";
		}
	}
	cout << total + amount << endl;
	return total + amount;
}

int trip(int options) {
	int hour = 24, zone = 0;
	while (zone < 1 || zone > 3) {
		cout << "What is the starting zone (1, 2, 3): ";
		cin >> zone;
	}
	while (hour < 0 || hour > 23) {
		cout << "What is the starting hour (0 - 23): ";
		cin >> hour;
	}
	return zone * 100 + hour;
}

int exit_trip(int options) {
	int hour = 24, zone = 0;
	while (zone < 1 || zone > 3) {
		cout << "What is the ending zone (1, 2, 3):";
		cin >> zone;
	}
	while (hour < 0 || hour > 23) {
		cout << "What is the ending hour (0 - 23): ";
		cin >> hour;
	}
	return zone * 100 + hour;
}

float fare_calc(int zone_hour, int sec_zone_hour) {
	float cost = 2.5;
	if ((zone_hour % 100 > 7 && zone_hour % 100 < 9) || (zone_hour % 100 > 17 && zone_hour < 19))
	{
		cost = cost + 1.25;
	}
	if ((sec_zone_hour % 100 > 7 && sec_zone_hour % 100 < 9) || (sec_zone_hour % 100 > 17 && sec_zone_hour < 19))
	{
		cost = cost + 1.25;
	}
	if (zone_hour / 100 != sec_zone_hour / 100)
	{
		cost = cost + 1.75;
	}
	cout << cost << endl;
	return cost;
}

void balance_screen(float balance)
{
	cout << "Your balance is " << balance << endl;
}

void summary(int zonehour, int seczonehour, float cost)
{
	cout << "Last Trip Summary" << endl;
	cout << "Start Zone: " << zonehour / 100 << endl;
	cout << "End Zone: " << seczonehour / 100 << endl;
	cout << "Start Hour: " << zonehour % 100 << endl;
	cout << "End Hour: " << seczonehour % 100 << endl;
	cout << "Fare Paid: " << cost << endl;
}
float poor_man(float balance, float cost, int penalty) {
	if (balance - cost - penalty * 6 < 0)
	{
		cout << "You owe money." << endl;
	}
	return balance - cost - penalty * 6;
 }