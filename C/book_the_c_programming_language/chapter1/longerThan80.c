#include <stdio.h>
#define MAXLENGTH 1000
#define THRESHOLD 80

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// Program prints out lines with more than 80 charactors as input
int main()
{
	int len;		//current line length
	int chosenLines = 0;	//chosen number of lines
	char line[MAXLENGTH];	//current input line
	char list[MAXLENGTH][MAXLENGTH];	//list of chosen lines

	while ((len = getLine(line, MAXLENGTH)) > THRESHOLD)
		copy(list[chosenLines], line);

	for (int i = 0; i < chosenLines; ++i)
		printf("%s", list[i]);
	return 0;
}

int getLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] =from[i]) != '\0')
		++i;
}
