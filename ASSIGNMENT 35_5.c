// 5. Write a program which display largest digits of all element from singly
// linear linked list.
// Function Prototype :void DisplayLarge( PNODE Head);
// Input linked list : |11|->|250|->|532|->|419|
// Output : 1 5 5 9
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
int Large(int No)
{
	int max = 0;
	int iDigit = 0;
	while(No != 0)
	{
		iDigit = No%10;
		if (iDigit > max)
		{
			max = iDigit;
		}
		No = No / 10;
	}
	return max;
	
}

void DisplayLarge(PNODE Head)
{
	PNODE temp = Head;
	while(temp!=NULL)
	{
		int max;
		max = Large(temp->Data);
		printf("%d ",max);
		temp = temp->Next;
	}
}

int main()
{
	PNODE First = NULL;
	InsertFirst(&First,419);
	InsertFirst(&First,532);
	InsertFirst(&First,250);
	InsertFirst(&First,11);
	printf("Input Linked List\n");
	Display(First);
	DisplayLarge(First);
	
	return 0;
}