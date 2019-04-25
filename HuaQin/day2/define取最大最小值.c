#include <stdio.h>

#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y) ((x)<(y)?(x):(y))

int main(int argc, const char *argv[])
{
	int x,y;
	scanf("%d,%d", &x, &y);

	printf("%d,%d\n", MAX(x,y), MIN(x,y));

	return 0;
}
