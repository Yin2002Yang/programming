#include <stdio.h>
#define MAX 100
#define NMAX 150

int main()
{
	char s1[MAX], s2[NMAX];

	fgets(s1, MAX, stdin);		//take the input
	
	int counter = 0;

	for (int i = 0; i < MAX; ++i)
	{
		switch(s1[i])
		{
			case '\a':
				s2[counter] = '\\';
				s2[counter+1] = 'a';
				counter += 2;
				break;
			case '\b':
				s2[counter] = '\\';
				s2[counter+1] = 'b';
				counter += 2;
				break;
			case '\f':
				s2[counter] = '\\';
				s2[counter+1] = 'f';
				counter += 2;
				break;
			case '\n':
				s2[counter] = '\\';
				s2[counter+1] = 'n';
				counter += 2;
				break;
			case '\r':
				s2[counter] = '\\';
				s2[counter+1] = 'r';
				counter += 2;
				break;
			case '\t':
				s2[counter] = '\\';
				s2[counter+1] = 't';
				counter += 2;
				break;
			case '\v':
				s2[counter] = '\\';
				s2[counter+1] = 'v';
				counter += 2;
				break;
			case '\\':
				s2[counter] = '\\';
				s2[counter+1] = '\\';
				counter += 2;
				break;
			case '\'':
				s2[counter] = '\\';
				s2[counter+1] = '\'';
				counter += 2;
				break;
			case '\"':
				s2[counter] = '\\';
				s2[counter+1] = '\"';
				counter += 2;
				break;
			case '\?':
				s2[counter] = '\\';
				s2[counter+1] = '\?';
				counter += 2;
				break;
			case '\0':
				s2[counter] = '\\';
				s2[counter+1] = '0';
				s2[counter+2] = '\0';
				break;
			default:
				s2[counter] = s1[i];
				counter++;
				break;
		}
	}
	printf("%s\n", s2);
	return 0;
}
