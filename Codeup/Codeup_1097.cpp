#include <stdio.h>

int main()
{
	int baduk[20][20] = { 0, };
	int i, num1, num2, count, j, x, y;

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
			scanf("%d ", &baduk[i][j]);
	}

	scanf("%d", &count);

	for (i = 0; i<count; i++)
	{
		scanf("%d%d", &num1, &num2);
		for (x = 1; x <= 19; x++)
		{
			baduk[x][num1] = !baduk[x][num1];
			baduk[num2][x] = !baduk[num2][x];
		}
	}

	for (i = 1; i <= 19; i++)
	{
		for (j = 1; j <= 19; j++)
			printf("%d ", baduk[i][j]);
		printf("\n");
	}
}
