#include <stdio.h>
#include <limits.h>
#include <math.h>
// print out range of char, short, int and long variables both signed and unsigned
// Mode:	Harder - calculated and later checked using standard libray functions

int main()
{
	char c;
	unsigned char uc;
	int i;
	unsigned int ui;
	short s;
	unsigned short us;
	long l;
	unsigned long ul;
	int cp, ip, sp, lp;	//holds size of each type in bytes, p for power
	cp = sizeof(c) * 8;
	ip = sizeof(i) * 8;
	sp = sizeof(s) * 8;
	lp = sizeof(l) * 8;

	puts("using calculatons to determine range for each variable type...");
	printf("char have a range of %.0lf to %.0lf\n", -pow(2, cp-1), pow(2, cp-1)-1);
	printf("unsigned char have a range of 0 to %.0lf\n", pow(2, cp)-1);
	printf("ints have a range of %.0lf to %.0lf\n", -pow(2, ip-1), pow(2, ip-1)-1);
	printf("unsigned ints have a range of 0 to %0.lf\n", pow(2, ip)-1);
	printf("longs have a range of %.0lf to %0.lf\n", -pow(2, lp-1), pow(2, lp-1)-1);
	printf("unsigned long have a range of 0 to %.0lf\n", pow(2, lp)-1);
	printf("shorts have a range of %.0lf to %.0lf\n", -pow(2, sp-1), pow(2, sp-1)-1);
	printf("unsigned shorts have a range of 0 to %0.lf\n", pow(2, sp)-1);
	return 0;
}
