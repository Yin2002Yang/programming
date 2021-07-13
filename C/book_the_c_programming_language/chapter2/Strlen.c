#include <stdio.h>
#define MAX 1000

int Strlen(char s[])
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
		++i;
	return i;
}

int main()
{
	char r[MAX];
	puts("Enter a string:");
	fgets(r, MAX, stdin);
	printf("Your string has %d length...\n", Strlen(r));
	return 0;
}
