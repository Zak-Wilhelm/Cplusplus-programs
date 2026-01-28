#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "What score did you make: ";
    cin >> score;

    if (score >= 60) {
        if (score >= 70) {
            if (score >= 80) {
                if (score >= 90) {
                    cout << "A";
                }
                else {
                    cout << "B";
                }
            }
            else {
                cout << "C";
            }
        }
        else {
            cout << "D";
        }
    }
    else {
        cout << "F";
    }
    return 0;
}