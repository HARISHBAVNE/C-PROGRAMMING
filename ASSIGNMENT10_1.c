//Q1. Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt;
	char ch = 'A';
	for (iCnt = 0;iCnt < iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch ++;
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