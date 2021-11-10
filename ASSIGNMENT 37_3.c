// 3.Write a recursive program which display below pattern.
// Input : 5
// Output : 5 4 3 2 1
#include<stdio.h>

void Display(int No)
{
	
	while(No>0)
	{
		printf("%d\t",No);
		No--;
	}
	
}
void DisplayR(int No)
{
	
	if (No>0)
	{
		printf("%d\t",No);
		No --;
		DisplayR(No);
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