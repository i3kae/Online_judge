#include <stdio.h>

int main()
{
	int i, count;

	scanf("%d", &count);
	for (i = count; i >= 1; i--)
		printf("%d\n", i - 1);
	return 0;
}
