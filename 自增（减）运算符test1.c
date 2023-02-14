#include<stdio.h>
int main()
{
	int num;
	int i = 3;
	num = i++;                                            //直接赋的是i的初始值
	printf("num=%d\ni=%d\n", num, i);   //这条语句开始，i的值增加了1
	return 0;
}

