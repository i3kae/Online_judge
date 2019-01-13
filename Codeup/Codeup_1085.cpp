#include <stdio.h>

int main()
{
	long long int num, a, b, c, d;

	scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

	printf("%.1lf MB", (a*b*c*d) / 8.0 / 1024 / 1024);
}
