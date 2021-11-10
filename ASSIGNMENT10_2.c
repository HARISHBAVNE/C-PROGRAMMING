//Q2. Accept number from user and display below pattern.
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

#include<stdio.h>

void Pattern(int iNo)
{
	// int iCnt = 0;
	// for (iCnt = iNo;iCnt > 0;iCnt--)
	// {
		// printf("%d \t#\t",iCnt);
	// }
	
	while(iNo>0)
	{
		printf("%d\t#\t",iNo);
		iNo --;
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number of Element:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}