// 3. Write a program which display product of all digits of all element from
// singly linear linked list. (Don’t consider 0)
// Function Prototype :
// void DisplayProduct( PNODE Head);
// Input linked list : |11|->|20|->|32|->|41|
// Output : 1 2 6 4
#include<Stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE Newn = NULL;
	Newn = (PNODE)(malloc(sizeof(NODE)));
	Newn->Data = No;
	Newn->Next = NULL;
	
	if (*Head == NULL)
	{
		*Head = Newn;
	}	
	else
	{
		Newn->Next = *Head;
		*Head = Newn;
	}
}
void Display(PNODE Head)
{
	while (Head != NULL)
	{
		printf("|%d|-> ",Head->Data);
		Head = Head->Next;
	}
	printf("NULL\n");
}

void DisplayProduct( PNODE Head)
{
	PNODE temp = Head;
	while(temp!=NULL)
	{
		
		int mult = 1;
		int iDigit = 0;
		if (temp->Data == 0)
		{
			temp->Data = 0;
		}
		else
		{
			while(temp->Data != 0)
			{
				iDigit = (temp->Data) % 10;
				if (iDigit == 0)
				{
					iDigit = 1;
				}
				mult = mult * iDigit;
				temp->Data = (temp->Data)/10;
			}
			temp->Data = mult;
		}
		temp = temp->Next;
	}
}

int main()
{
	PNODE First = NULL;
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,0);
	InsertFirst(&First,11);
	printf("Input Linked List\n");
	Display(First);
	
	DisplayProduct(First);
	printf("Output Linked List\n");
	Display(First);
	
	return 0;
}