#include <stdio.h>

int Q2main()
{
	long int value1 = 200000;
	long int value2;

	long* lPtr; //create a pointer with type long

	lPtr = &value1; //Assign lPtr with value1's address

	printf("%d\n\n", *lPtr); //Print the value pointed by lPtr

	value2 = *lPtr; //Assign value pointed by lPtr to value2

	printf("%d\n%p\n%p\n", value2, &value1, lPtr); //Print value2, address of value1 and address store in lPtr

	return 0;
}