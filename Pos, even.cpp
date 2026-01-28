#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "type any number: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "Number is positive and even";
        }
        else {
            cout << "Number is positive and not even";
        }
    }
    else {
        cout << "Number is negative or zero";
    }
    return 0;
}