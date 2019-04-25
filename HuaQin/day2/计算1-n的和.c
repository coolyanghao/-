#include <stdio.h>

int main(int argc,char *argv[])
{

	int  mid = 1;
	int max;
	int temp = 0;

	printf("请输入需要加的值：");

	scanf("%d", &max);

	for(mid; mid <= max; mid++)
	{
    	temp += mid;	
	}

	printf("1 + ..%d 的和为:%d\n", max, temp);

	return 0;

}
