#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	int a;
	char b;
	bool c;
	short d;
	long e;
	long long f;

	printf("a = %d\n",sizeof(a));
	printf("b = %c\n",sizeof(b));
	printf("c = %c\n",sizeof(c));
	printf("d = %s\n",sizeof(d));
	printf("e = %s\n",sizeof(e));
	printf("f = %s\n",sizeof(f));

	
	float g = 3.4e+25;
	double h = 3.4e+25;
	printf("%f,%lf\n", g, h);

	printf("g = %d\n", sizeof(g));
	printf("h = %d\n", sizeof(h));

	return 0;
}
