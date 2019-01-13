#include <stdio.h>

int main()
{
	char a, b;
	scanf("%c %c", &a, &b);
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%c %c", a, b);
	return 0;
}