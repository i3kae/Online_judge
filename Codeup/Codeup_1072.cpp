#include <stdio.h>

int main()
{
	int num, i, count;

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &num);
		printf("%d\n", num);
	}
	return 0;
}
