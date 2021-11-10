// 4. Write a program which display smallest digits of all element from singly
// linear linked list.
// Function Prototype :
// void DisplaySmall( PNODE Head);
// Input linked list : |11|->|250|->|532|->|415|
// Output : 1 0 2 1
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
int Small(int No)
{
	int min = 9;
	int iDigit = 0;
	while(No != 0)
	{
		iDigit = No%10;
		if (iDigit < min)
		{
			min = iDigit;
		}
		No = No / 10;
	}
	return min;
	
}

void DisplaySmall(PNODE Head)
{
	PNODE temp = Head;
	while(temp!=NULL)
	{
		int min;
		min = Small(temp->Data);
		printf("%d ",min);
		temp = temp->Next;
	}
}

int main()
{
	PNODE First = NULL;
	InsertFirst(&First,415);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	printf("Input Linked List\n");
	Display(First);
	DisplaySmall(First);
	
	return 0;
}