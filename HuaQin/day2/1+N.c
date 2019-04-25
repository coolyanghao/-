#include <stdio.h>

int main(int argc, const char *argv[])
{
	int save;
	unsigned int a = 1,b = 0;

	printf("请输入需要加的值：");
	scanf("%d", &save);

	for(a; a <= save;a++)
	{
		b += a;	
	}
	printf("1 + %d 的和 = %d\n", save, b);
		
	return 0;
}
