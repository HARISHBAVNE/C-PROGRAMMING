// 1. Write a program which reverse each element of singly linked list.
// Function Prototype :
// void Reverse( PNODE Head);
// Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
// Output : |11|->|82|->|71|->|14|->|6|->|98|
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
	Newn ->Next = NULL;
	
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
	while(Head != NULL)
	{
		printf("|%d|-> ",Head->Data);
		Head = Head->Next;
	}
	printf("NULL\n");
}
int reverse(int no)
{
	int rev = 0;
	int iDigit = 0;
	while(no != 0)
	{
		iDigit = no%10;
		rev = (rev*10)+iDigit;
		no = no/10;
	}
	return rev;
}
void Reverse(PNODE Head)
{
	PNODE temp = Head;
	if (Head == NULL)
	{
		return;
	}
	else
	{
		while(temp!= NULL)
		{
			temp->Data = reverse(temp->Data);
			temp = temp->Next;
		}
	}
	
}


int main()
{
	PNODE First = NULL;
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	printf("Input Linked list\n");
	Display(First);
	Reverse(First);
	printf("Reverse each element of Linked list\n");
	Display(First);
	return 0;
}