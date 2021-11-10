//Q4.Write a program which accept range from user and return addition of all even
// numbers in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 108
// Input : 10 18
// Output : 70
// Input : -10 2
// Output : Invalid range
// Input : 90 18
// Output : Invalid range

#include<stdio.h>
int RangeSumEven(int iStart , int iEnd)
{
	if (iStart < 0)
	{
		printf("Invalid Input");
		return 1;
	}
	if (iStart > iEnd)
	{
		printf("Invalid Input");
		return 1;
	}
	
	
	int iCnt = 0;
	int Sum = 0;
	
	for (iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		if ((iCnt%2) == 0)
		{
			Sum = Sum + iCnt;
		}
	}
	return Sum;
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	int iRet = 0;
	
	printf("Enter Starting point");
	scanf("%d",&iValue1);
	
	printf("Enter Ending point");
	scanf("%d",&iValue2);
	
	iRet = RangeSumEven(iValue1,iValue2);
	
	printf("%d",iRet);
	
	
	return 0;
}