// 1. Write a program which search first occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.
// Function Prototype :
// int SearchFirstOcc( PNODE Head , int no );
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 3

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int Data;
	struct node *next;
	
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE newn = NULL;
	newn = (PNODE)(malloc(sizeof(NODE)));
	newn ->Data = No;
	newn -> next = NULL;
	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn ->next = *Head;
		*Head = newn;
	}
}
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\n",Head->Data);
		Head = Head ->next;
	}
}
int SearchFirstOcc(PNODE Head,int NO)
{
	PNODE temp = Head;
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		if (temp ->Data != NO)
		{
			
			temp = temp->next;
		}
		else
		{
			break;
		}
	}
	return iCnt;
}
int main()
{
	int iRet = 0;
	PNODE First = NULL;
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = SearchFirstOcc(First,30);
	printf("First Occurance is:%d",iRet);
	
	return 0;
}