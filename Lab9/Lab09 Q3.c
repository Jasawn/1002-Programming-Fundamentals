#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define maxchar 255
#define magicword "HEHE"

int Q3main()
{
	char userinput[maxchar] = { 0 };
	char checkchar[maxchar] = { 0 };
	int counter = 0;
	bool magic = false;

	printf("Enter a sentence, up to 255 characters:\n");
	fgets(userinput, maxchar, stdin);

	int length = strlen(userinput) - 1;

	for (int i = 0; i <= length; i++)
	{
		if (ispunct(userinput[i]) == 0 && isspace(userinput[i]))
		{
			if (strcmp(magicword, checkchar) == 0)
			{
				magic = true;
				printf("%s\t%d\n", checkchar, counter);
				counter = 0;
			}
			else
			{
				checkchar[counter] = '\0';
				printf("%s\t%d\n", checkchar, counter);
				counter = 0;
			}
		}
		else if (isalpha(userinput[i]))
		{
			checkchar[counter] = userinput[i];
			counter++;
		}
		
	}
	if (magic == true)
	{
		printf("You have found the magic word!");
	}
	return 0;
}