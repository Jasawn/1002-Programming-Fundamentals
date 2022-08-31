#include <stdio.h>

typedef struct grade_node
{
	char surname[20]; //20bytes
	double grade; //8bytes
	struct grade_node* next; //4bytes
} GRADE_NODE;

typedef GRADE_NODE* GRADE_NODE_PTR;

int Q1main()
{
	GRADE_NODE_PTR head = NULL;
	//head = (GRADE_NODE_PTR*)malloc(sizeof(GRADE_NODE_PTR));

	GRADE_NODE item1 = { "Adams", 85.0 };
	GRADE_NODE item2 = { "Pritchard", 66.5 };

	head = &item1; //Adam is the first data
	item1.next = &item2; //Adam is first and next is Pritchard

	while (head != NULL)
	{
		if (head->next == NULL)
		{
			GRADE_NODE item3 = { "Jones", 91.5 }; //Third item
			item3.next = head;
			head = &item3; //insert Jones in between Adam and Pritchard
			printf("Second Data: %s %.2f\n", head->surname, head->grade);
			head = head->next;
			printf("Third Data: %s %.2f\n", head->surname, head->grade);
			head = NULL;
		}
		else
		{
			printf("First Data: %s %.2f\n", head->surname, head->grade);
			head = head->next;
		}
	}
}