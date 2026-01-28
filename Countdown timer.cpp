#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "How long on the timer: ";
    cin >> num;

    while (num >= 1)
    {
        cout << "t minus " << num << endl;
        num = num - 1;
    }
    return 0;
}