#include <stdio.h>

//temp table from F to C again! This time using functions

double FtoC(double f);

#define MIN 0
#define MAX 300
#define STEP 20

int main()
{
	double fahr;
	
	for (fahr = MIN; fahr < MAX; fahr += STEP)
		printf("%3.0lf %6.1lf\n", fahr, FtoC(fahr));
	return 0;
}

double FtoC(double fahr)
{
	return (fahr - 32.0) * (5.0 / 9.0);
}
