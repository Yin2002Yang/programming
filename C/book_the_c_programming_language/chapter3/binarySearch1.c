#include <stdio.h>
#define MAX 100000

// binary search that does no tests outside loop
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n-1;

	while (low <= high)
	{
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else			//match found
			return mid;
	}

	return -1;			//match not found
}

int main()
{
	int i[MAX];

	for (int k = 0; k < MAX; k++)
		i[k] = k;

	printf("%d\n", binsearch(5000, i, MAX));
	return 0;
}
