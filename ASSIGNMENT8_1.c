//Q1.Write a program which accept number from user and print that number of $ & *
// on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *
// Input : 3
// Output : $ * $ * $ *

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
void Pattern(int iNo)
{
	if(iNo <= 0)
	{
		return;
	}
	while (iNo > 0)
	{
		printf("$ * ");
		iNo --;
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number \n");
	scanf("%d",&iValue);
	Pattern(iValue);
	return 0;
}
