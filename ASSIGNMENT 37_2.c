// 2. Write a recursive program which display below pattern.
// Input : 5
// Output : 1 2 3 4 5
#include<stdio.h>

void Display(int No)
{
	int i = 1;
	while(i<=No)
	{
		printf("%d\t",i);
		i ++;
	}
	
}
void DisplayR(int No)
{
	static int i = 1;
	if (i<=No)
	{
		printf("%d\t",i);
		i ++;
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