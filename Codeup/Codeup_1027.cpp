#include <stdio.h>

int main()
{
	int a, b, c;
	int i = 0;
	scanf("%d.%d.%d", &a, &b, &c);

	printf("%02d-%02d-%04d", c, b, a);
}