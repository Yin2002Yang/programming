#include<stdio.h>

/* Now the previous F to C table will be
 * printed in reverse order
 */

#define LOWER 0
#define UPPER 300
#define STEP 20
main()
{
	float fahr;

	for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	{
		printf("%3.0f\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
	}
}
