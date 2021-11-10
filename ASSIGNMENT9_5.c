//Q5.Write a program which accept accept range from user and display all numbers in
// between that range in reverse order.
// Input : 23 35
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
// Input : -10 2
// Output : 2 1 0 -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
// Input : 90 18
// Output : Invalid range

#include<stdio.h>
int RangeDisplayRev(int iStart , int iEnd)
{
	if (iStart > iEnd)
	{
		printf("Invalid Input");
		return 1;
	}
		
	int iCnt = 0;
	for (iCnt = iEnd;iCnt >= iStart;iCnt--)
	{
		printf("%d ",iCnt);
	}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter Starting point");
	scanf("%d",&iValue1);
	
	printf("Enter Ending point");
	scanf("%d",&iValue2);
	
	RangeDisplayRev(iValue1,iValue2);
	
	return 0;
}