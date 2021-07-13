#include <stdio.h>

// This program prints out it's input one word per line

int main()
{
	char c;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\t') || (c == '\n'))
			putchar('\n');
		else
			putchar(c);
	}
	return 0;
}
