#include <stdio.h>
#include <string.h>

#define ASCII 128
int any(const char s1[], const char s2[])
{
	int len2 = strlen(s2);
	int chart[ASCII];

	// create a blank ASCII map
	for (int i = 0; i < ASCII; i++)
		chart[i] = 0;

	// update the map
	for (int i = 0; i < len2; i++)
		++chart[s2[i]];

	int value = -1;		// value to be returned, -1 by default, ie not found

	for (int i = 0; s1[i] != '\0'; i++)
		if (chart[s1[i]] > 0)
		{
			value = i;
			break;
		}

	return value;		// value returned is 0 indexed
}

int main()
{
	char a[] = "I am home";
	char b[] = "am";

	printf("Match found at position %d\n", any(a, b));
	return 0;
}
