#include <stdio.h>

int main()
{
	long long int a, b, c;

	scanf("%lld%lld%lld", &a, &b, &c);

	printf("%lld\n%.1lf", a + b + c, (a + b + c) / 3.0);
}