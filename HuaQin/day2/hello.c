#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("hello world!\n");

	printf("%s, %s, %d\n", __FILE__, __FUNCTION__,__LINE__); 
	printf("world!\n");
	return 0;
}
