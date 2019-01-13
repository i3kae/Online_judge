#include <stdio.h>

int main()
{
	int first, second;

	scanf("%d-%d", &first, &second);

	printf("%06d%07d", first, second);
}