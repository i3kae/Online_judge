#include <stdio.h>

int main()
{
	int num, i, count, min = 10000000;

	scanf("%d", &count);
	for (i = 0; i<count; i++)
	{
		scanf("%d", &num);
		if (min > num)
			min = num;
	}

	printf("%d", min);
}
