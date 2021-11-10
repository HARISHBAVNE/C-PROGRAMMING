//Q2.Write a program which accept number from user and print numbers till that
// number.
// Input : 8
// Output : 1 2 3 4 5 6 7 8

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
void Display(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	int iCnt = 0;
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d ",iCnt);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}