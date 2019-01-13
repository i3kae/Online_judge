#include <stdio.h>

int main()
{
	int i;
	int count, sum = 0;
	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	printf("%d", sum);
	return 0;
}
