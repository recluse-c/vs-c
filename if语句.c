#include<stdio.h>
int main()
{
	float score;
	printf("please input a score:\n");
	scanf_s("%f", &score);
	if (score < 0 || score>100)
	{
		printf("请输入一个0~100之间的成绩");
	}
	else if (score < 60)
	{
		printf("E\n");
	}
	else if (score < 70)
	{
		printf("D\n");
	}
	else if (score < 80)
	{
		printf("C\n");
	}
	else if (score < 90)
	{
		printf("B\n");
	}
	else if (score < 100)
	{
		printf("A\n");
	}
	return 0;
}