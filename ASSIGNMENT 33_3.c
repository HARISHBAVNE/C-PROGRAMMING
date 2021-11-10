// 3. Write a program which returns addition of all element from singly linear
// linked list.
// Function Prototype :
// int Addition( PNODE Head);
// Input linked list : |10|->|20|->|30|->|40|
// Output : 100

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
int Addition(PNODE Head)
{
	int Sum = 0;
	PNODE temp = Head;
	while (temp != NULL)
	{
		Sum = Sum + temp->Data;
		temp = temp->Next;
	}
	return Sum;
	
}

int main()
{
	int iRet = 0;
	PNODE First = NULL;
	
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = Addition(First);
	printf("Addition is:%d",iRet);
	
	return 0;
}