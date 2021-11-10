// Q3.Write a program which accept number from user and display all its non factors.
// Input : 12
// Output : 5 7 8 9 10 11

# include<stdio.h>
void NonFact(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int iCnt = 0;
	for (iCnt = 1;iCnt<=iNo;iCnt++)
	{
		if ((iNo%iCnt)!=0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	printf("Enter number");
	scanf("%d",&iValue);
	NonFact(iValue);
	return 0;
}