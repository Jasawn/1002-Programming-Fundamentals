#include <stdio.h>

int Q1main()
{
	int* zPtr;
	int* aPtr = NULL;
	void* sPtr = NULL;

	int number;
	int i;

	int z[5] = { 1,2,3,4,5 };
	zPtr = z;
	sPtr = z;

	number = zPtr[0]; //retrieved the first value of the array

	number = zPtr[2]; //assign value 3 to number

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", zPtr[i]);
	}

	return 0;
}