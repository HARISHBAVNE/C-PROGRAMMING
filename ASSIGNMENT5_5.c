// 5.Write a program which accept number from user and return difference between
// summation of all its factors and non factors.
// Input : 12
// Output : -34 (16 - 50)


# include <stdio.h>

int FactDiff(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int iCnt = 0;
	int SumFact = 0;
	int SumNonFact = 0;
	
	for (iCnt = 1;iCnt < iNo;iCnt++)
	{
		if ((iNo%iCnt) !=0)
		{
			SumNonFact = SumNonFact + iCnt;
		}
		else
		{
			SumFact = SumFact + iCnt;
		}
	}
	return ((SumFact) - (SumNonFact)) ;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	printf("%d ",iRet);
	
	return 0;
}



