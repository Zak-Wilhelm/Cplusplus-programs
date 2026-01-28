#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int type, day, hour;
	char yn;
	double gcost = 0, scost = 0, tcost = 0;
	string slot_time, day_text;

	cout << "Why are you here ( 1 = General Checkup, 2 =Emergency, 3 = specialist:): ";
	cin >> type;
	cout << "What day (1 = Monday, 2 = Tuesday, 3 = Wednesday, 4 =Thursday, 5= Friday, 6 = Saturday, 7 = Sunday): ";
	cin >> day;
	cout << "Enter Hour (0-23): ";
	cin >> hour;
	cout << "Do you have a referal (Y for yes and N for no: ";
	cin >> yn;

	if (type == 1) {
		gcost = 80;

		if (day == 6 || day == 7) {
			scost = scost + 20;
		}
		if (hour < 9) {


			switch (day) {
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + "9:00";
		}
		else if (hour >= 9 && hour < 17) {

			switch (day) {
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + " " + to_string(hour + 1) + ":00";
		}
		else {
			int next_day = (day % 7) + 1;
			switch (day) {
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + "9:00";
		}
	}
	else if (type == 2) {
		gcost = 250;
		if (hour >= 22 || hour < 6) {
			scost = scost + 50;
		}
		slot_time = "Immediately";
	}
	else if (type == 3) {
		gcost = 150;

		cout << "Do you have a referral? (Y/N): ";
		cin >> yn;

		if (yn == 'N' || yn == 'n') {
			scost = scost + 40;
		}
		if (day == 6 || day == 7) {
			slot_time = "Mon 10:00";
		}
		else {
			if (hour < 10) {
				switch (day) {
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + "10:00";
			}
			else if (hour >= 10 && hour < 16) {
				switch (day) {
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + " " + to_string(hour + 1) + ":00";
			}
			else {
				int next_day = (day % 7) + 1;

				if (next_day == 6 || next_day == 7) {
					next_day == 1;
				}
				switch (next_day) {
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + "10:00";
			}
		}
	}
	else {
		cout << "Invalid service type";
		return 0;
	}
	tcost = gcost + scost;

	cout << fixed << setprecision(2);
	cout << "Appointment Summary" << endl;
	cout << "Base cost : " << gcost << endl;
	cout << "Surcharge : " << scost << endl;
	cout << "Total cost : " << tcost << endl;
	cout << "next slot : " << slot_time << endl;

	return 0;
}