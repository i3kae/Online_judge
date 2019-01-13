#include <stdio.h>

int main()
{
	char ch[21];
	int i = 0;
	scanf("%s", ch);


	for (i = 0; ch[i] != '\0'; i++)
		printf("\'%c\'\n", ch[i]);
}