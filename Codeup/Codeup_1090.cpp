#include <stdio.h>

int main()
{
	int num, p_m, start, i, sum;

	scanf("%d%d%d", &start, &p_m, &num);
	sum = start;
	for (i = 1; i < num; i++)
		sum *= p_m;

	printf("%d", sum);
}
