#include <stdio.h>

int main()
{
	int	earth[11][11], i, j, x = 2, y = 2;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
			scanf("%d", &earth[i][j]);
	}

	while (1)
	{
		if (earth[y][x + 1] == 1)
		{
			earth[y][x] = 9;
			if (earth[y + 1][x] == 2)
			{
				earth[y + 1][x] = 9;
				break;
			}
			if ((x == 9) && (y == 9))
				break;
			y++;
		}
		else
		{
			earth[y][x] = 9;

			if (earth[y][x + 1] == 2)
			{
				earth[y][x + 1] = 9;
				break;
			}
			if ((x == 8) && (y == 8))
				break;
			x++;
		}
	}
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
			printf("%d ", earth[i][j]);
		printf("\n");
	}
}
