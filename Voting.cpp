#include <iostream>
using namespace std;

int main()
{
    int citizens, age;

    cout << "Are you a citizen (1 for yes, 0 for no): ";
    cin >> citizens;
    cout << "How old are you: ";
    cin >> age;

    if (age >= 18) {
        if (citizens == 1) {
            cout << "Eligible";
        }
        else {
            cout << "Uneligible, citizenship";
        }
    }
    else {
        cout << "Uneligible, age";
    }
    return 0;
}