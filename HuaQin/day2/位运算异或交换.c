/*
 * 从终端读入两个整数,a,b对a和b进行交换
 * tips:位运算
 *
 */

#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a, b, c;
	printf("请输入要交换的数值:");

	scanf("%d,%d", &a, &b);
	printf("未交换:a = %d, b = %d\n", a, b);

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("已交换:a = %d, b = %d\n", a ,b);

	return 0;
}
