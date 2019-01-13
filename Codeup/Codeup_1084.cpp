#include <stdio.h>

int main()
{
	int num, i1, i2, i3, i, j, k, flag = 0;

	scanf("%d%d%d", &i1, &i2, &i3);

	for (i = 0; i < i1; i++)
	{
		for (j = 0; j < i2; j++)
		{
			for (k = 0; k < i3; k++)
			{
				printf("%d %d %d\n", i, j, k);
				flag++;
			}
		}
	}
	printf("%d", flag);
}
