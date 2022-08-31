#include <stdio.h>
#include <string.h>

#define MAXCHAR 255

void match(char* userinput, char* patterninput)
{
	int userinputlen = strlen(userinput) - 2;
	int patterninputlen = strlen(patterninput) - 2;
	int counter = 0;
	int position = 0;
	int b = 0;

	for (int a = 1; a <= userinputlen; a++)
	{
		if (position > (a-1))
		{
			continue; //Skip to the string where the first occurance is found
		}
		while (b <= patterninputlen)
		{
			if ((patterninput[b] == userinput[a-1]) || (patterninput[b] == '_' && isspace(userinput[a-1])) || patterninput[b] == '.') // If string matches pattern OR pattern is _ and string is space
			// OR pattern includes '.'
			{
				counter++;
				position = a-1; // Getting the final position of the match string
				b++;
			}

			else
			{
				break;
			}
		}
		if (a-1 == userinputlen && counter == 0) // If end of the string still no match, skip
		{
			break;
		}
	}

	if (counter == strlen(patterninput) - 1)
	{
		if (position == 0)
		{
			printf("Matches at position %d", (position));
		}
		else
		{
			printf("Matches at position %d", (position - (strlen(patterninput) - 2)));
		}
		
	}
	else
	{
		printf("No match");
	}
	
}

int main()
{
	char userinput[MAXCHAR], patterninput[MAXCHAR],userinputlower[MAXCHAR] = { 0 };
	char casesensitiveresp;

	printf("Enter a sentence, up to 255 characters:\n");
	fgets(userinput, MAXCHAR, stdin);

	printf("Enter pattern, up to 255 characters:\n");
	fgets(patterninput, MAXCHAR, stdin);

	printf("Is the match going to be case-sensitive? [Y/N]:\n");
	scanf_s(" %c", &casesensitiveresp, 1);

	while (!(tolower(casesensitiveresp) == 'y' || tolower(casesensitiveresp) == 'n'))
	{
		printf("Is the match going to be case-sensitive? [Y/N]:\n");
		scanf_s(" %c", &casesensitiveresp, 1);
	}

	int response = tolower(casesensitiveresp);
	if (response == 'n')
	{
		int inputlen = strlen(userinput);
		for (int a = 0; a <= inputlen; a++)
		{
			userinputlower[a] = tolower(userinput[a]);
		}
		match(userinputlower, patterninput);
	}
	else
	{
		match(userinput, patterninput);
	}

	return 0;
}
