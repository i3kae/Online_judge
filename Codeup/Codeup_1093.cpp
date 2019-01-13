#include <stdio.h>

int main()
{
	int student[23] = { 0, };
	int num, i, count;

	scanf("%d", &count);
	for (i = 1; i <= count; i++)
	{
		scanf("%d", &num);
		student[num - 1] += 1;
	}

	for (i = 0; i < 23; i++)
		printf("%d ", student[i]);
}
