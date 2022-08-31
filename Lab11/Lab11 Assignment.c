#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_CHAR 33

typedef struct word
{
	char userinput[MAX_CHAR]; //20bytes
	struct word_node* next; //4bytes
} WORD;

typedef WORD* WORD_PTR;

int main()
{
	int loop = 0;
	int length = 0;
	int counter = 0;
	char endloop[4] = "***"; //fgets consists of \n
	char* idk = NULL;

	WORD_PTR head = NULL;
	WORD_PTR headptr = NULL;
	WORD_PTR word = NULL;
	WORD_PTR temp = NULL;

	while (loop == 0)
	{
		char input[MAX_CHAR] = { 0 };
		bool validword = true;

		printf("Please enter a word:");
		fgets(input, MAX_CHAR, stdin); //take in user input
		strtok_s(input, "\n", &idk);

		if (strcmp(input, endloop) == 0)
		{
			loop = 1;
		}
		else
		{
			length = strlen(input)-1;
			for (int a = 0; a < length; a++)
			{
				if (isalpha(input[a]) > 0 || input[a] == '\'' || input[a] == '-')
				{
					input[a] = tolower(input[a]);
				}
				else
				{
					validword = false;
					break;
				}
			}
			if (validword == false)
			{
				//If the word consists of other characters then it will continue to prompt the user to type again
				continue;
			}
			else
			{
				word = (WORD*)malloc(sizeof(WORD));
				if (word == NULL)
				{
					printf("Memory Allocation Failed\n");
					return 0;
				}

				strcpy_s(word->userinput, sizeof(input), input);
				

				if (counter == 0) // if linked list is empty
				{
					word->next = NULL;
					head = word;
					headptr = head;
					counter++;
				}
				else
				{
					if (strcmp(input, head->userinput) > 0) //if input is bigger than current item
					{
						word->next = NULL;
						head->next = word;
						temp = head; //remembers the position of the prev item
						head = head->next;
					}
					else
					{
						head = temp; //point back to the prev charac
						temp = temp->next; //get the item of the current next item so it does not get lost

						head->next = word; //insertion
						head = head->next;

						temp->next = NULL;
						head->next = temp;
						head = head->next;
					}
				}
			}
		}
	}
	printf("All the entered words in order:\n");
	while (headptr != NULL)
	{
		printf("%s\n", headptr->userinput);
		headptr = headptr->next;
	}
	return 0;
}