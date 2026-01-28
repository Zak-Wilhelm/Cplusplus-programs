#include <iostream>
#include <string>
using namespace std;

int main()
{
    int marks, exam;
    bool sports = false;
    string quota;

    cout << "What are your marks: ";
    cin >> marks;
    cout << "What are your exam scores: ";
    cin >> exam;
    cout << "Do you meet the sports quota: ";
    cin >> quota;
    if (quota == "yes") {
        sports = true;
    }
    if (marks >= 85 && exam >= 80) {
        cout << "Welcome to the Honors program";
    }
    else if (marks >= 70 && exam >= 60) {
        cout << "Welcome to the regular program";
    }
    else if (marks >= 60 && sports == true) {
        cout << "Admitted on sports";
    }
    else {
        cout << "Bye Bye";
    }
    return 0;
}