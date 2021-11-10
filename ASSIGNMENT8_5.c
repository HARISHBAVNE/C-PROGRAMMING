//Q5. Write a program which accept N and print first 5 multiples of N.
// Input : 4
// Output : 4 8 12 16 20

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
void MultipleDisplay(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int mult = 0;
	int icnt = 0;
	for (icnt =1;icnt <=5;icnt++)
	{
		mult = (iNo * icnt);
		printf("%d ",mult);
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	MultipleDisplay(iValue);
	
	return 0;
}