// 2. Write a program which display all palindrome elements of singly linked
// list.
// Function Prototype :
// void DisplayPallindrome( PNODE Head);
// Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
// Output : 11 6 414
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
void DisplayPallindrome(PNODE Head)
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
			if(temp->Data == reverse(temp->Data))
			{
				printf("%d\t",temp->Data);
			}
			temp = temp->Next;
		}
	}
	
}


int main()
{
	PNODE First = NULL;
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,414);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);

	printf("Input Linked list\n");

	Display(First);
	printf("\nPalindrome elements: ");
	DisplayPallindrome(First);

	return 0;
}