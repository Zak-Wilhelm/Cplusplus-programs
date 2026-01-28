#include <iostream>
using namespace std;

int main()
{
    int num = 1, sum = 0;

    do {
        cout << "What is the first number to sum (0 stops): ";
        cin >> num;
        sum = sum + num;
    } while (num != 0);
    cout << sum;
    return 0;
}