#include<stdio.h>
int main()
{
	int num;
	int i = 3;
	num = (++i) + (++i) + (++i);           // i先进行三次自加运算，再赋值(win)
	printf("num=%d\ni=%d\n", num, i);
	return 0;
}