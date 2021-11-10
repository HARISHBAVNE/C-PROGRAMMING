//Q4. Write a program which accepts N from user and print all odd numbers up to N.
// Input : 18
// Output : 1 3 5 7 9 11 13 15 17

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
void OddDisplay(int iNo)
{
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	int icnt = 0;
	for (icnt =1;icnt <iNo;icnt++)
	{
		if (icnt%2 !=0)
		{
			printf("%d ",icnt);
		}
	}
}
int main()
{
	int iValue = 0;
	
	printf("Enter Number:");
	scanf("%d",&iValue);
	
	OddDisplay(iValue);
	
	return 0;
}