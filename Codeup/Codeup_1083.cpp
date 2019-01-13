#include <stdio.h>

int main()
{
	int num, i;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		if ((i % 10 == 3) || (i % 10 == 6) || (i % 10 == 9))
			printf("X ");
		else
			printf("%d ", i);
	}
}
