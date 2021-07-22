// A simple program to convert mile to kilometers
#include <iostream>

using namespace std;

const double factor = 1.609;

int main()
{
	cout << "Enter distance in mile:";
	double mile = -1, km = -1;
	cin >> mile;
	if (mile < 0)
	{
		cout << "Distance cannot be negative." << endl;
		return 1;
	}
	km = mile * factor;
	cout << mile << " miles means " << km << " kilometers." << endl;
	return 0;
}
