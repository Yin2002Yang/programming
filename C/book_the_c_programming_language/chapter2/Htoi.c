#include <stdio.h>
#include <string.h>

int Htoi(const char s[])
{
	int i = 0;

	if (s[0] == '0')
		++i;
	if ((s[1] == 'x') || (s[1] == 'X'))
		++i;

	int len = 0, decimal = 0, hexdigit = 0;
	len = strlen(s);

	for (; i < len; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			hexdigit = s[i] - '0';
			decimal = 16 * decimal + hexdigit;
		}

		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			hexdigit = s[i] - 'A' + 10;
			decimal = 16 * decimal + hexdigit;
		}

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			hexdigit = s[i] - 'a' + 10;
			decimal = 16 * decimal + hexdigit;
		}
	}

	return decimal;
}

int main()
{
	char a[15];
	puts("Enter Hexadecimal:");
	fgets(a, 15, stdin);
	printf("Equivalent integer: %d\n", Htoi(a));
	return 0;
}
