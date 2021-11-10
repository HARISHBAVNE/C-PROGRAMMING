//Q5. Accept number from user and display below pattern.
// Input : 8
// Output : 2 4 6 8 10 12 14 16

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d\t",iCnt * 2);
	}
	
	// for (iCnt =1;iCnt <= (iNo*2);iCnt++)
	// {
		// if ((iCnt%2)==0)
		// {
			// printf("%d ",iCnt);
		// }
	// }
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number of Elements:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}