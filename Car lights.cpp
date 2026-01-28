#include <iostream>
#include <string>
using namespace std;

int main()
{
    string light, vehicle;
    int car_speed;
    bool evehicle = false;

    cout << "What is the lights color: ";
    cin >> light;

    if (light == "green") {
        cout << "GO";
    }
    else if (light == "yellow") {
        cout << "What is your car's speed: ";
        cin >> car_speed;
        if (car_speed < 40) {
            cout << "stop immediately";
        }
        else {
            cout << "proceed with caution";
        }
    }
    else if (light == "red") {
        cout << "Is there an emergency vehicle: ";
        cin >> vehicle;
        if (vehicle == "yes") {
            evehicle = true;
        }
        if (evehicle == true) {
            cout << "Allow emergency vehicle through";
        }
        else {
            cout << "Stop";
        }
    }
    else {
        cout << "Invalid input";
    }
    return 0;
}