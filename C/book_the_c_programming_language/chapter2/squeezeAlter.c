#include <stdio.h>
#include <string.h>

#define ASCII_LIMIT 128

void squeezeAlter(char s1[], const char s2[])
{
	int table[ASCII_LIMIT];
	int len2 = strlen(s2);

	for (int i = 0; i < ASCII_LIMIT; i++)
		table[i] = 0;

	for (int i = 0; i < len2; ++i)
		++table[s2[i]];

	int len1 = strlen(s1);
	char s3[len1];
	int i;
	int pos = 0;
	for (i = 0; i < len1; i++)
		if (table[s1[i]] == 0)
		{
			s3[pos] = s1[i];
			++pos;
		}
	s3[pos] = '\0';

	strcpy(s1, s3);
}

int main()
{
	char c[] = "FateGrandOrder";
	char t[] = "FateStayNight";

	squeezeAlter(c, t);
	printf("%s\n", c);
	return 0;
}
