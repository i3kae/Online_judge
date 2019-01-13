#include <stdio.h>

int main()
{
	int num, i, sum = 0;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
}
