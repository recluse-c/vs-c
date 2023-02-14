#include<stdio.h>
int main()
{
	char a      =  'x';
	int b        =  101;
	float c     =  3.14f;
	double d =  1.23;
	int e       =  0x3d;                //16进制的数据以0x开头，a=10,b=11,c=12,d=13.
	float f     =  0.0123f;
	double g = 123456;
	char* p = "hello world";     //指针
	printf("a=%c\n", a);
	printf("b=%d\n", b);
	printf("c=%f\n", c);
	printf("d=%lf\n", d);
	printf("e=%x\n", e);        //%x输出十六进制数据
	printf("e=%d\n", e);       //3*16+13
	printf("f=%e\n", f);       //a e b = a*10^b
	printf("g=%e\n", g);   
	printf("%s\n", p);        //打印字符串

	printf("**%03d**\n", 1);
	printf("**%03d**\n", 1234); //超过三位，无效语句
	printf("**%3d**\n", 1);         //在前面填充空格
	printf("**%-3d**\n", 1);      //在后面填充空格
	printf("**%5.2f**\n", 3.1415926);  // .2f : 保留小数点后两位，这里的“5”无效
	printf("**%5.2f**\n", 11111.31415926);  
	

		return 0; 

}