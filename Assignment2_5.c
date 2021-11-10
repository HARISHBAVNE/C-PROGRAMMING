// 5. Accept number from user and check whether number is even or odd.
# include<stdio.h>
typedef int BOOL;
# define TRUE 1
# define FALSE 0
BOOL ChkEven(int iNo)
{
	if (iNo%2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	BOOL BRet = FALSE;
	printf("Enter a number");
	scanf("%d",&iValue);
	BRet = ChkEven(iValue);
	if (BRet == TRUE)
	{
		printf("Number is Even");
	}
	else
	{
		printf("Number is Odd");
	}
	return 0;
}