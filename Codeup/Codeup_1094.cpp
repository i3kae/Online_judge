#include <stdio.h>

int main()
{
	int student[23] = { 0, };
	int num, i, count;

	scanf("%d", &count);
	for (i = 0; i<count; i++)
	{
		scanf("%d", &num);
		student[i] = num;
	}

	for (i = count - 1; i >= 0; i--)
		printf("%d ", student[i]);
}
