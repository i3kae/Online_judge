#include <stdio.h>

int main()
{
	int num1, num2, i, j;

	scanf("%d%d", &num1, &num2);

	for (i = 1; i <= num1; i++)
	{
		for (j = 1; j <= num2; j++)
			printf("%d %d\n", i, j);
	}
}
