﻿#include<stdio.h>
int main()
{
	printf("%d\n", (-1) >> 3);
	return 0;
}
/*    -1
1000 0000 0000 0000 0000 0000 0000 0001 原码
1111 1111 1111 1111 1111 1111 1111 1110 反码
1111 1111 1111 1111 1111 1111 1111 1111 补码
判断是逻辑右移还是算数右移
前者高位补0，后者高位补符号位1

*/

