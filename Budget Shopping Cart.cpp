#include <iostream>
using namespace std;

int main()
{
	float budget, item_price, items_bought = -1, total_spent;

	cout << "What is your budget: ";
	cin >> budget;
	total_spent = budget;

	do {
		cout << "What is the items price (0 to stop): ";
		cin >> item_price;
		if (item_price < 0) {
			cout << "You inputed a negative number" << endl;
			cout << "Input new item price: ";
			cin >> item_price;
		}
		budget = budget - item_price * 1.1;
		while (budget < 0) {
			cout << "Item is to expensive, removing from cart" << endl;
			budget = budget + item_price;
			cout << budget << endl;
			items_bought--;
		}
		items_bought++;
	} while (item_price != 0);
	cout << "Total items bought " << items_bought << endl;
	cout << "Total amount spent " << total_spent - budget << endl;
	cout << "Remaining budget " << budget << endl;
	return 0;
}