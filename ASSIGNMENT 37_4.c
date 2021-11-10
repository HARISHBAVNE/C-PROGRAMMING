// 4.Write a recursive program which display below pattern.
// Input : 6
// Output : A B C D E F
#include<stdio.h>

void Display(int No)
{
	if (No > 26)
	{
		return;
	}
	char ch = 'A';
	while(No>0)
	{
		printf("%c\t",ch);
		No--;
		ch ++;
	}
	
}
void DisplayR(int No)
{
	if (No > 26)
	{
		return;
	}
	static char ch = 'A';
	if (No>0)
	{
		printf("%c\t",ch);
		No --;
		ch ++;
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