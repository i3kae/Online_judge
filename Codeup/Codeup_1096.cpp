#include <stdio.h>

int main()
{
	int baduk[20][20] = { 0, };
	int i, num1, num2, count, j;

	scanf("%d", &count);
	for (i = 0; i<count; i++)
	{
		scanf("%d%d", &num1, &num2);
		baduk[num2][num1] = 1;
	}

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
			printf("%d ", baduk[i][j]);
		printf("\n");
	}
}
