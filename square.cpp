#include <stdio.h>
void square(int);
int main()
{
	int x;
	scanf("%d", &x);
	square(x);
	return 0;
}
void square(int x)
{
	printf("%d", x*x);
}
