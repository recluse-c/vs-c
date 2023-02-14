#include<stdio.h>
int main()
{
	printf("%d\n", 5 / 2);
	printf("%lf\n", 5.0 / 2);

	int a = -8;                  //有无符号数参与运算，有符号数变为无符号数，结果是无符号数
	unsigned int b = 7;
	if (a + b > 0)
	{
		printf("a + b > 0\n");
	}
	else if (a + b < 0)
	{
		printf("a + b < 0\n");
	}
	else
	{
		printf("a + b = 0\n");
	}
	printf("a + b = %d\n", a + b);           //     %d使打印结果变为有符号数

	int c;
	float d = 5.8f;
	c = d;                                             //  在赋值过程中，等号右边类型转换为等号左边类型
	printf("c=%d\n", c);                    //   浮点型转换为整型，小数部分舍去
	printf("d=%f\n", d);                   //   自动转换是临时性的，不改变数据类型

	
	return 0;
}