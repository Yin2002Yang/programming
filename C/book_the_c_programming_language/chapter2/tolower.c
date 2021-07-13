#include <stdio.h>
#include <string.h>

char tolower2(char c)
{
	char r;
	r = ((c >= 'A') && (c <= 'Z')) ? c+32 : c;
	return r;
}

int main()
{
	char str1[] = "I am Sushanta Banerjee";
	char str2[80];

	int len = strlen(str1);
	
	for (int i = 0; i < len; ++i)
		str2[i] = tolower2(str1[i]);

	printf("%s\n", str2);
	return 0;
}
