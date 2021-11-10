// 2. Write a program which search last occurrence of particular element from
// singly linear linked list.
// Function should return position at which element is found.
// Function Prototype :
// int SearchLastOcc( PNODE Head, int no );
// Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
// Input element : 30
// Output : 6

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
}
int SearchLastOcc(PNODE Head,int No)
{
	int iCnt = 0;
	int Occurance = 0;
	PNODE temp = Head;
	while (temp != NULL)
	{
		iCnt++;
		if(temp->Data == No)
		{
			Occurance = iCnt; 
		}
		temp = temp ->Next;
	}
	return Occurance;
	
}

int main()
{
	int iRet = 0;
	PNODE First = NULL;
	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,30);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = SearchLastOcc(First,30);
	printf("Last Occurance is:%d",iRet);
	
	return 0;
}