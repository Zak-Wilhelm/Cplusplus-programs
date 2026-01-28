#include <iostream>
using namespace std;

int main()
{
    int credit_score, age, salary;

    cout << "How old are you: ";
    cin >> age;
    cout << "What is your credit score: ";
    cin >> credit_score;
    cout << "What is your income: ";
    cin >> salary;

    if (age >= 21) {
        if (salary > 30000) {
            if (credit_score > 650) {
                cout << "Loan approved";
            }
            else {
                cout << "credit score to low";
            }
        }
        else {
            cout << "Income to low";
        }
    }
    else {
        cout << "Too young";
    }
    return 0;
}