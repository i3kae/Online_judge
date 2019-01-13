#include <stdio.h>

int main()
{
	int num, num1, num2, start, i, sum;

	scanf("%d%d%d%d", &start, &num1, &num2, &num);
	sum = start;
	for (i = 0; i < num - 1; i++)
	{
		sum *= num1;
		sum += num2;
	}

	printf("%d", sum);
}
