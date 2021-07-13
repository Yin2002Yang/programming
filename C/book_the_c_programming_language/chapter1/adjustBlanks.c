#include <stdio.h>

// Program to adjust multiple blanks with a single one

int main()
{
	int blank_count = 0;
	char c;

	while ((c = getchar()) != EOF)
	{
		if ((blank_count != 0) && (c != ' '))
		{
			blank_count = 0;
			putchar(' ');
		}

		if (c != ' ')
			putchar(c);

		if (c == ' ')
			++blank_count;

	}

	return 0;
}
