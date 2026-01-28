#include <iostream>
using namespace std;

float usd_to_cny(float usd);
float usd_to_zar(float usd);

int main()
{
	float currency;
	char type;

	cout << "How much USD are you exchanging for foreign currency: ";
	cin >> currency;

	cout << "Do you want chinese(C) or south african(Z): ";
	cin >> type;

	if (type == 'c' || type == 'C')
	{
		currency = usd_to_cny(currency);
		cout << "You have " << currency << " Chinese Yuan";
	}
	else
	{
		currency = usd_to_zar(currency);
		cout << "You have " << currency << " South African Rand";
	}
	return 0;
}

float usd_to_cny(float usd)
{
	return usd * 7.25;
}
float usd_to_zar(float usd)
{
	return usd * 18.30;
}