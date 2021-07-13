#include <stdio.h>
#include <ctype.h>

#define ALPHABETS 26

// a program that calcuate frequency of appeared charactors...

int main()
{
	int list[ALPHABETS];
	char c;

	for (int i = 0; i < ALPHABETS; i++)
		list[i] = 0;

	while ((c = getchar()) != EOF)
	{
		c = toupper(c);
		if (( c >= 'A') && (c <= 'Z'))
			++list[c - 'A'];
	}

	for (int i = 0; i < ALPHABETS; i++)
		printf("%c: %d\n", i+'A', list[i]);
	return 0;
}
