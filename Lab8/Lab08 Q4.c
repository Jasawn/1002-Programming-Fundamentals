#include <stdio.h>

#define GUESSCOUNT count
#define MINLIMIT 1
#define MAXLIMIT 1000

int main()
{
	int play1input = 0, play2input = 0; //Get the input of player1 and player2
	int count = 10; //Number of tries allowed for player2
	
	while (!((play1input >= MINLIMIT) && (play1input <= MAXLIMIT))) //Will keep looping until player1 input meets the requirement range
	{
		printf("Player 1, Enter a number between 1 and 1000:\n");
		scanf_s("%d", &play1input); //Get input
		if (!((play1input >= MINLIMIT) && (play1input <= MAXLIMIT))) //Error message for player1 if requirements not met
		{
			printf("That number is out of range.\n");
		}
	}

	while (count != 0) //Loop 10times, if finish the loop and cannot guess correctly player1 wins
	{
		int guessresults = 0; //Compare the difference between 2 numbers
		printf("Player 2, you have %d guesses remaining.\n", GUESSCOUNT);
		printf("Enter your guess:\n");
		scanf_s("%d", &play2input); //Get player2 input

		if (play2input >= MINLIMIT && play2input <= MAXLIMIT)
		{
			guessresults = play1input - play2input;
			if (guessresults < 0) //If negative means player2 guess too high
			{
				printf("Too high.\n");
				count--; //Minus the number of tries left
			}
			else if (guessresults > 0) //If positive means player2 guess too low
			{
				printf("Too low.\n");
				count--; //Minus the number of tries left
			}
			else
			{
				printf("Player 2 wins.");
				break;
			}
		}
		else
		{
			printf("That number is out of range.\n");
		}
	}
	if (count == 0)
	{
		printf("Player 1 wins.");
	}
	return 0;
}

bool match(char* userinput, char* patterninput)
{
	int userinputlen = strlen(userinput) - 2;
	int patterninputlen = strlen(patterninput) - 2;
	int counter = 0;
	int firstoccurance = 0;
	int a = 0;

	while (a <= patterninputlen)
	{
		if (patterninput[a] == '.')
		{
			counter++;
			a++;
			continue;
		}
		for (int b = 0; b <= userinputlen; b++)
		{
			printf("%c", userinput[b]);
			if (patterninput[a] == userinput[b])
			{
				if (counter == 0)
				{
					firstoccurance = b;
				}
				else if (firstoccurance > b)
				{
					continue;
				}
				counter++;
				break;
			}
			else if (b == userinputlen)
			{
				counter = 0;
			}
		}
		if (counter == 0)
		{
			break;
		}
		else
		{
			a++;
		}
	}
	printf("%d", counter);
	if (counter == strlen(patterninput) - 1)
	{

		printf("Matches at position %d", firstoccurance);
	}
	else
	{
		printf("No match");
	}
	return 0;
}