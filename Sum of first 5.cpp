#include <iostream>
using namespace std;

int main()
{
    int sugnum, num = 1, sum = 0;
    cout << "What number do you wish to end the sequence: ";
    cin >> sugnum;

    while (num <= sugnum)
    {
        cout << num << endl;
        sum = sum + num;
        num = num + 1;
    }
    cout << sum;
    return 0;
}