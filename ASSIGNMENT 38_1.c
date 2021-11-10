// 1. Write a recursive program which accept number from user and display below
// pattern.
// Input : 5
// Output : 5 * 4 * 3 * 2 * 1 *

#include<stdio.h>
void Display(int No)
{
	while(No > 0)
	{
		printf("%d\t*\t",No);
		No --;
	}
	
}
void DisplayR(int No)
{
	if (No>0)
	{
		printf("%d\t*\t",No);
		
		DisplayR(No-1);
	}
	
}
int main()
{
	int iNo = 0;
	printf("Enter a number:");
	scanf("%d",&iNo);
	DisplayR(iNo);
	return 0;
}