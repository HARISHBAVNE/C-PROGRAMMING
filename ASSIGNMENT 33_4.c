// 4. Write a program which return largest element from singly linear linked
// list.
// Function Prototype :
// int Maximum( PNODE Head);
// Input linked list : |110|->|230|->|320|->|240|
// Output : 320

#include<stdio.h>
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
	PNODE newn = NULL;
	
	newn = (PNODE)(malloc(sizeof(NODE)));
	newn -> Data = No;
	newn -> Next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->Next = *Head;
		*Head = newn;	
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
int Maximum(PNODE Head)
{
	PNODE temp = Head;
	int Max = temp->Data;
	
	while (temp != NULL)
	{
		if ((temp ->Data) > Max)
		{
			Max = temp->Data;
		}
		temp = temp->Next;
	}
	return Max;
	
}

int main()
{
	int iRet = 0;
	PNODE First = NULL;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	
	iRet = Maximum(First);
	printf("Largest Element is:%d",iRet);
	
	return 0;
}