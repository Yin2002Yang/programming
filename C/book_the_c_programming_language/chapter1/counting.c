#include <stdio.h>

// A program to count blanks, tabs and newlines

int main()
{
	int blank, tab, nl;
	char c;

	blank = tab = nl = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++nl;
	}
	printf("Blanks: %i\nTabs: %i\nNew Lines: %i\n", blank, tab, nl);
	return 0;
}
