//Q3. Write a program which accept number from user and print its numbers line.
// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4

// Name = HARISH VIJAY BAVNE, RID = PM-311000199/LB-11000164
// solution

# include<stdio.h>
void Display(int iNo)
{
	int icnt = 0;
	for (icnt = -iNo;icnt <= iNo;icnt++)
	{
		printf("%d ",icnt);
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