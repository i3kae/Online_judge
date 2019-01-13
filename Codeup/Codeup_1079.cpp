#include <stdio.h>

int main()
{
	char ch;
	int count, sum = 0;
	while (1)
	{
		scanf("%c", &ch);
		if (ch == ' ')
			continue;
		printf("%c\n", ch);
		if (ch == 'q')
			break;
	}
	return 0;
}
