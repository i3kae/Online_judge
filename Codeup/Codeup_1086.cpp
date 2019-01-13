#include <stdio.h>

int main()
{
	long long int num, a, b, c;

	scanf("%lld%lld%lld", &a, &b, &c);

	printf("%.2lf MB", (a*b*c) / 8.0 / 1024 / 1024);
}
