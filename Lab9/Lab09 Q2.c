#include <stdio.h>
#include <string.h>

int Q2main()
{
	char* a = "abcdef"; //String become read-only
	char b[7];
	strncpy_s(b, 7, a, 7); //Set the string size

	for (int i = 0; i < 3; i++)
	{
		b[i] = b[i] + 1; //Take the next character 
	}
	b[3] = '\0'; //set the end of array at third character BUT, 4 and 5 will still retain the value
	
	printf("%c\n", a[0]);
	printf("%c\n", b[0]);
	printf("%c\n", b[4]);
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(b));
	printf("%d\n", strcmp(a, b)); //Compare each string in ASCII A = "abcdef" B = "bcddef"

	return 0;
}