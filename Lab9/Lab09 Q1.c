#include <stdio.h>

int Q1main()
{
	int a[4] = { -1, 2, 10, 7 };
	int b[4];
	for (int i = 0; i < 4; i++)
		b[i] = a[3 - i]; //reverse the order

	printf("%d\n%d\n%d\n", a[3], b[3], b[a[1]]);  //a[1] = 2; b[a[1]] is to get the second element from the array

	return 0;
}
