#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int count = 1, answer, compnum;
    srand(time(0));
    compnum = rand() % 100 + 1;

    cout << "Guess my secret number: ";
    cin >> answer;

    while (answer != compnum)
    {
        if (answer > compnum)
        {
            cout << "Your answer is to high" << endl;
        }
        else
        {
            cout << "Your answer is to low" << endl;
        }
        cout << "Wrong try again: ";
        cin >> answer;
        count++;
    }
    cout << "You got it" << endl;
    cout << count;
    return 0;
}