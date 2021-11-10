// 4.Write a program which accept number from user and return summation of all its
// non factors.
// Input : 12
// Output : 50

# include <stdio.h>

int SumNonFact(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int iCnt = 0;
	int Sum = 0;
	for (iCnt = 1;iCnt < iNo;iCnt++)
	{
		if ((iNo%iCnt) !=0)
		{
			Sum = Sum + iCnt;
		}
	}
	return Sum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	printf("%d ",iRet);
	
	return 0;
}



