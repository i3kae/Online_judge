#include <stdio.h>

int main()
{
	long long int a, b;

	scanf("%lld%lld", &a, &b);

	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2lf\n", a / (double)b);
}