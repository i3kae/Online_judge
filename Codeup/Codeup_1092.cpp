#include <stdio.h>

int main()
{
	int num3, num1, num2, i, sum;

	scanf("%d%d%d", &num1, &num2, &num3);
	for (i = 1;; i++)
	{
		if ((i%num1 == 0) && (i%num2 == 0) && (i%num3 == 0))
			break;
	}

	printf("%d", i);
}
