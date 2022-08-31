#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define USERINPUT 13 //limiting the userinput to 12 only

int Q4main()
{
	bool check = false;
	char player1input[USERINPUT], guess[USERINPUT] = { 0 }; //declare variables
	char player2input;
	int* length = 0;

	while (check == false) //will keep looping until the user meets the requirements
	{
		int count = 0;
		printf("Player 1, enter a word of no more than 12 letters:\n");
		fgets(player1input, USERINPUT, stdin); //take in player 1 input

		length = strlen(player1input) - 1;
		
		for (int a = 0; a < length; a++) //loop through the string player1 have entered
		{
			if (isalpha(player1input[a]) == 2) //if characters are lower-case
			{
				count++; //count to make sure every characters are lower-case
			}
			else if (isalpha(player1input[a]) == 1) //if characters are upper-case
			{
				player1input[a] = tolower(player1input[a]);
				count++;
			}
			else if (isalpha(player1input[a]) == 0) //if characters are not letters
			{
				printf("Sorry, the word must contain only English letters.\n");
				break;
			}
		}
		if (count == length) //if the string is lower-case then it will break the loop
		{
			check = true;
		}
	}

	int play2guesscount = 7; //max tries player 2 is allowed
	int b = 0;
	char* player1inputptr = player1input;

	while (player1input[b] != '\n')
	{
		strncat(guess, "_", 1);
		strncat(guess, " ", 1);
		b++;
	}

	char* player2ptr = guess;
	int match = 0;

	while (play2guesscount != 0) //will keep looping until player2 have used up his tries
	{
		int guesscount = 0;
		printf("Player 2 has so far guessed: %s\n", guess);

		if (match == length) //check if the player2 string matches player1 input
		{
			printf("Player 2 wins.");
			break;
		}

		printf("Player 2, you have %d guesses remaining. Enter your next guess:\n", play2guesscount);
		scanf_s(" %c", &player2input, 1); //ask player2 to input his characters

		for (int c = 0; c < length; c++) //loop through player1 input to find matches
		{
			if (tolower(player2input) == player1inputptr[c]) //tolower is to convert any characters by player 2 to lowercase
			{
				guesscount++; 
				match++;
				if (c == 0)
				{
					player2ptr[c] = player1inputptr[c];
				}
				else
				{
					player2ptr[c * 2] = player1inputptr[c]; //if matches, it inputs into player2 guess's string
				}
			}
		}
		if (guesscount == 0) //if player2 does not match anything, the count will reduce
		{
			play2guesscount--;
		}
	}
	if (play2guesscount == 0) //if the max tries have been exceeded
	{
		printf("Player 1 wins!");
	}
	return 0;
}


