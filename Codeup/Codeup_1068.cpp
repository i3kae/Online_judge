#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch (a / 10)
	{
	case 10:
	case 9:printf("A"); break;
	case 8:
	case 7:printf("B"); break;
	case 4:
	case 5:
	case 6:printf("C"); break;
	default:printf("D");
	}

}
