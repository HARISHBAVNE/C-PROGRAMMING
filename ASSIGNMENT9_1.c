//Q1.Write a program which accept range from user and display all numbers in between
// that range.
// Input : 23 35
// Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
// Input : 90 18
// Output : Invalid range
// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
int RangeDisplay(int iStart,int iEnd)
{	
	if (iStart > iEnd)
	{
		printf("Invalid Range");
		return 1;
	}
	
	int iCnt = 0;
	for (iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		printf("%d ",iCnt);
	}
}
int main()
{
	int iValue1 = 0,iValue2;
	int iRet = 0;
	printf("Enter Starting point:");
	scanf("%d",&iValue1);
	printf("Enter Ending point:");
	scanf("%d",&iValue2);
	iRet = RangeDisplay(iValue1,iValue2);
	if iRet != 1;
	{
		print("%d",iRet);
	}
	
	return 0;
}
