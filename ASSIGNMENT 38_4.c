// 4. Write a recursive program which accept number from user and return its
// factorial.
// Input : 5
// Output : 120

#include<stdio.h>
int Fact(int No)
{
	int Facto = 1;
	int i = No;
	for (i=No;i>0;i--)
	{
		Facto = Facto * i;
	}
	return Facto;
}
int FactR(int No)
{
	static int Facto = 1;
	
	if (No>0)
	{
		Facto = Facto * No;
		No --;
		FactR(No);
	}
	return Facto;
	
	
}
int main()
{
	int iRet = 0;
	int iNo = 0;
	
	printf("Enter a Number:");
	scanf("%d",&iNo);
	iRet = FactR(iNo);
	printf("%d",iRet);
	
	return 0;
}