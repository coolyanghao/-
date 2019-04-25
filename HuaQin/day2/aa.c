#include <stdio.h>

int main(int argc, const char *argv[])
{
#if 1
	char a = 'a';
#endif

#if 0
	signed char a = 128;
#endif

#if 0
	unsigned char a = -1;
#endif

#if 0

	char a = 127;
#endif 

	printf("%d,%c\n", a, a);
	printf("a\taa\n");

	return 0;
}
