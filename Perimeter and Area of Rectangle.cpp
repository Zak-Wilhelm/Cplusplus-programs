#include <iostream>
using namespace std;

int calculate_perimeter(int length, int width);
int calculate_area(int length, int width);

int main()
{
	int l, w;
	cout << "What is the width and length of the rectangle: ";
	cin >> w >> l;

	int perimeter = calculate_perimeter(l, w);
	int area = calculate_area(l, w);

	cout << "The perimeter is: " << perimeter << endl;
	cout << "The area is: " << area;
	return 0;
}

int calculate_perimeter(int length, int width)
{
	return 2 * length + 2 * width;
}
int calculate_area(int length, int width)
{
	return length * width;
}