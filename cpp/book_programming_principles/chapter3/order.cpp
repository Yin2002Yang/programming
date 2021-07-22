// a program to order and print 3 given integers
#include <iostream>

using namespace std;

int main()
{
	int val[3];
	cout << "Enter three integers:";
	val[1] = val[2] = val[3] = 0;
	cin >> val[1] >> val[2] >> val[3];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 2-i-1; j++)
		{
			if (val[i] > val[j])
			{
				int temp = val[i];
				val[i] = val[j];
				val[j] = temp;
			}
		}
	}

	cout << val[1] << ", " << val[2] << ", " << val[3] << "." << endl;
	return 0;
}
