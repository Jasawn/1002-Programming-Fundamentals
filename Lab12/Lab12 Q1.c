#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 255
#define RECORDSIZE 512
#define NAMSIZ 100
#define TUNMLEN 32
#define TGNMLEN 32

typedef struct header {
	char name[NAMSIZ];
	char mode[8];
	char uid[8];
	char gid[8];
	char size[12];
	char mtime[12];
	char chksum[8];
	char linkflag;
	char linkname[NAMSIZ];
	char magic[8];
	char uname[TUNMLEN];
	char gname[TGNMLEN];
	char devmajor[8];
	char devminor[8];
}TARHEADER;


int main()
{
	
	FILE* f2;
	char* file1;
	char* file2;
	int counter = 0;
	int loop = 0;
	char endloop[2] = "*";
	char* idk = NULL;
	char check[8] = "minitar";

	while (loop == 0)
	{
		printf("Please enter a file name\n");

		char input[MAX_CHAR] = { 0 };
		fgets(input, MAX_CHAR, stdin);

		int inc = 0;
		char* word = strtok_s(input, "\n", &idk);
		word = strtok_s(input, " ", &idk);

		if (strstr(word, check))
		{
			while (word != NULL)
			{
				if (counter == 1)
				{
					file1 = word;

					printf("%s", file1);
					FILE* f1 = fopen_s(&file1,file1, "r");

					if (f1 != NULL)
					{
						perror("Error opening of file");
						return (-1);
					}
					else if (f1 == NULL)
					{
						fseek(f1, 0L, SEEK_END);
						long int len = ftell(f1);
						printf("%d", len);
						fclose(f1);
						printf("%d", len);
					}

				}
				if (counter == 2)
				{
					file2 = word;
					printf("%s\n", file2);
				}
				word = strtok_s(NULL, " ", &idk);
				counter++;
			}

		}
		else
		{
			continue;
		}

	}

}