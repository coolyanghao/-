#include <stdio.h>

int main(int argc, const char *argv[])
{
	char a;

	scanf("%c", &a);

	 if('0' <= a && a <= '9')
		{
			printf("int:%d\n", a - 48);	
		}
#if 0
	 if('a' <= a && a <= 'z')
		{
			printf("char:%c,%d\n", a - 32, a - 32);	
		}
#endif
	 if('A' <= a && a <= 'Z')
		{
			printf("char:%c, %d\n", a + 32, a + 32);	
		}

	return 0;
}
