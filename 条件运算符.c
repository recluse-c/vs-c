#include<stdio.h>
int main()
{
	int a;
	int b;
	a = ((3 < 5) ? 8 : 9);
	b = ((3 > 5) ? 8 : 9);
	printf("a=%d\nb=%d\n", a , b);
	return 0;
}
