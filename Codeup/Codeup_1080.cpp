#include <stdio.h>

int main()
{
	char ch;
	int count, sum = 0, i;

	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		sum += i;
		if (sum >= count)
			break;
	}
	printf("%d", i);
	return 0;
}
