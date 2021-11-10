// 1. Write a recursive program which display below pattern.
// Input : 5
// Output : * * * * *

#include<stdio.h>
void Display(int No)
{
	while(No > 0)
	{
		printf("*\t");
		No --;
	}
	
}
void DisplayR(int No)
{
	if (No>0)
	{
		printf("*\t");
		
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