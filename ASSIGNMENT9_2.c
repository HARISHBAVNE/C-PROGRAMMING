//Q2. Write a program which accept range from user and display all even numbers in
// between that range.	
// Input : 23 35
// Output : 24 26 28 30 32 34
// Input : 10 18
// Output : 10 12 14 16 18


// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
int RangeDisplayEven(int iStart,int iEnd)
{
	if (iEnd < iStart)
	{
		printf("Please Enter Valid range");
		return 1;
	}
	
	int iCnt = 0;
	for (iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
		if ((iCnt%2) == 0)
		{
			printf("%d ",iCnt);
		}
			
	}
}
int main()
{
	int iValue1 = 0,iValue2;
	printf("Enter Starting point:");
	scanf("%d",&iValue1);
	printf("Enter Ending point:");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	return 0;
}
