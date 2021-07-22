// a simple program to performs various operations on two given double input
#include <iostream>

using namespace std;

double euclidGCD(double val1, double val2);

int main()
{
	double val1 = 0, val2 = 0;
	cout << "Provide two double values:";
	cin >> val1 >> val2;

	if (val1 > val2)
	{
		cout << val1 << " is of greater value." << endl;
		cout << val2 << " is of smaller value." << endl;
	}
	else
	{
		cout << val2 << " is of greater value." << endl;
		cout << val1 << " is of smaller value." << endl;
	}

	cout << "Sum of " << val1 << " and " << val2 << " is " << val1+val2 << "." << endl;
	cout << "Difference of " << val1 << " and " << val2 << " is " << val1-val2 << "." << endl;
	cout << "Product of " << val1 << " and " << val2 << " is " << val1*val2 << "." << endl;
	double GCD = -1;
	GCD = euclidGCD(val1, val2);
	val1 /= GCD;
	val2 /= GCD;
	cout << "Ratio of " << val1 << " and " << val2 << " is " << val1 << ":" << val2 << "." << endl;
	return 0;
}
	
double euclidGCD(double val1, double val2)
{
	if (val1 == 0)
		return val2;
	if (val2 == 0)
		return val1;
	double result, mod;
	result = val1 / val2;
	mod = (int)val1 % (int)val2;
	return euclidGCD(val2, mod);
}
