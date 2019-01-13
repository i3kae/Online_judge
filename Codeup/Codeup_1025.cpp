#include <stdio.h>

int main()
{
	int num;
	int i = 0;
	scanf("%d", &num);
	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]", (num / 10000) * 10000, num % 10000 / 1000 * 1000, num % 1000 / 100 * 100, num % 100 / 10 * 10, num % 10);
}