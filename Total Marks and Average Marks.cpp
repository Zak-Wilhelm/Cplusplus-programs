#include <iostream>
using namespace std;

int calculate_total(int fmark, int smark, int tmark);
int calculate_average(int total, int subject);

int main()
{
	int fmark, smark, tmark;
	cout << "Enter three marks: ";
	cin >> fmark >> smark >> tmark;

	int total = calculate_total(fmark, smark, tmark);
	int average = calculate_average(total, 3);

	cout << "The total was: " << total << endl;
	cout << "The average was: " << average;
	return 0;
}

int calculate_total(int fmark, int smark, int tmark)
{
	return fmark + smark + tmark;
}
int calculate_average(int total, int subject)
{
	return total / subject;
}