//Q3. Accept number from user and display below pattern.
// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 *

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	for (iCnt = 1;iCnt <= iNo ;iCnt++)
	{
		printf("%d\t*\t",iCnt);
	}
	// int iCnt=1;
	// while(iCnt <= iNo)
	// {
		// printf("%d\t*\t",iCnt);
		// iCnt ++;
	// }
	
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number of Element:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}