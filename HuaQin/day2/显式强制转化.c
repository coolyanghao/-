#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 0
	//显式强制转换
	int c = 10;
	printf("%f\n",(float)c);
#endif

	//隐式强制转换
	int k = 10;
	float b = 3.4;

	printf("%d\n",k);
	printf("%f\n",b);

	b = k;
	printf("%f\n", b);
	return 0;
}
