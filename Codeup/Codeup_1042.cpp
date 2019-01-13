#include <stdio.h>

void factorial(int *sum, int num)

int main()
{
	int num,count, i, sum=1	;

	scanf("%d", &num);

	factorial(&sum, num);

	printf("%d", sum);
}

void factorial(int *sum,int num)
{
	if (num == 0)
		return;
	sum *= num;
	factorial(sum,num-1)
}