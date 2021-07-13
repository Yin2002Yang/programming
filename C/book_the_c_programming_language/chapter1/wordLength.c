#include <stdio.h>
#define MAX_WORDS 15
// prints a histogram of length of the input words

int main()
{
	int length[MAX_WORDS], wordCount = 0;
	char c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
			wordCount++;
		else
			length[wordCount]++;
	}

	for (int i = 0; i < wordCount; i++)
	{
		printf("%d: ", i);
		for (int j = 0; j < length[i]; j++)
			printf("#");
		printf("\n");
	}
	return 0;
}

