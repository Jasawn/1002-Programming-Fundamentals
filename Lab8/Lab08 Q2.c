#include <stdio.h>

int main()
{
	int a = -1, b = 2;
	float x = 0.1;
	float y = 1.5;
	char c = 'p';

	printf("%d\n",a / b);
	printf("%d\n", a * b);
	printf("%d\n", (b * 3) % 4);
	printf("%f\n", (x * a));
	printf("%f\n", (x * y));
	printf("%f\n", (y / x));
	printf("%c\n", (c - 3));

	printf("%4d", a);
	printf("%04d", b);
	printf("a/b = %d", a / b);
	printf("%x", b);
	printf("%.2f", y);
	printf("%10.1f", x);
	printf("c =\t%c", c);

	return 0;
}
