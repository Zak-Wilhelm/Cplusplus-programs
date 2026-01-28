#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
    int type, age, day, hour, baggage;
    float fare = 0, total = 0, distance;
    char SFB, student, member;

    cout << "What mode of transportation (1 = bus, 2 = train, 3 = flight): ";
    cin >> type;
    cout << "How far are you traveling in km: ";
    cin >> distance;
    cout << "How much does your baggage weigh: ";
    cin >> baggage;
    cout << "How old are you: ";
    cin >> age;
    cout << "Are you a member (Y/N): ";
    cin >> member;
    cout << "Are you a student (Y/N): ";
    cin >> student;

    switch (type) {
        case 1:
            cout << "Do you have a sleeper (Y/N): ";
            cin >> SFB;
            if (SFB == 'Y' || SFB == 'y') {
                fare = (distance / 2) * 1.2;
            }
            else {
                fare = distance / 2;
            }
            cout << "What hour mark is it (0-23): ";
            cin >> hour;
            if (hour > 7 && hour < 20)
            {
                if (hour > 10 && hour < 17)
                {
                    fare = fare + 2;
                }
                else {
                    fare = (fare + 2) * 1.15;
                }
            }
            if (baggage < 10) {
                baggage = 0;
            }
            else {
                baggage = baggage - 10;
            }
            break;
        case 2:
            cout << "Are you in first class (Y/N): ";
            cin >> SFB;
            if (SFB == 'Y' || SFB == 'y') {
                fare = (distance * 0.8) * 1.5;
            }
            else {
                fare = distance * 0.8;
            }
            cout << "What hour mark is it (0-23): ";
            cin >> hour;
            if (hour > 7 && hour < 20)
            {
                if (hour > 10 && hour < 17)
                {
                    fare = fare + 5;
                }
                else {
                    fare = (fare + 5) * 1.15;
                }
            }
            if (baggage < 10) {
                baggage = 0;
            }
            else {
                baggage = baggage - 10;
            }
            break;
        case 3:
            cout << "Are you in Business (Y/N): ";
            cin >> SFB;
            if (SFB == 'Y' || SFB == 'y') {
                fare = (distance * 2.5) * 2.2;
            }
            else {
                fare = distance * 2.5;
            }
            cout << "What day of the week is it (1 = Mon, 2 = Tue, 3 = Wed, 4 = Thu, 5 = Fri, 6 = Sat, 7 = Sun: ";
            cin >> day;
            if (day > 5)
            {
            fare = (fare + 50) * 1.1;
            }
            else
            {
                fare = fare + 50;
            }
            if (baggage < 15) {
                baggage = 0;
            }
            else {
                baggage = (baggage - 15) * 3;
            }
            break;
        default:
            cout << "invalid input";
            return 0;
    }
    if (age < 12) {
        fare = fare / 2;
    }
    else if (age >= 60)
    {
        fare = fare - (fare * 0.3);
    }
    else
    {
        fare = fare;
    }
    if (student == 'Y' || student == 'y')
    {
        if (distance > 20) {
            fare = fare - (fare * 0.1);
        }
    }
    if (member == 'Y' || member == 'y')
    {
        fare = fare - (fare * 0.05);
    }
    total = (fare + baggage) * 100;
    cout << fixed << setprecision(2);
    round(total);
    total = total / 100;

    cout << "Your total is: " << total << " US dollars.";
    return 0;
}