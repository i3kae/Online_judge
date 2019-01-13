#include <stdio.h>

int main()
{
	int pan[101][101] = { 0, }, stick, x, y, d, line, i, j, x1, y1;

	scanf("%d%d", &x, &y);

	scanf("%d", &stick);

	for (i = 0; i < stick; i++)
	{
		scanf("%d%d%d%d", &line, &d, &y1, &x1);
		if (d == 0)
		{
			for (j = 0; j < line; j++)
			{
				pan[y1][x1] = 1;
				x1++;
			}
		}
		else
		{
			for (j = 0; j < line; j++)
			{
				pan[y1][x1] = 1;
				y1++;
			}
		}
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("%d ", pan[i + 1][j + 1]);
		printf("\n");
	}
}
