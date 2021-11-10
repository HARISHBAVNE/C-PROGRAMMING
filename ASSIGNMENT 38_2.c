// 2. Write a recursive program which accept number from user and return
// summation of its digits.
// Input : 879
// Output : 24

#include<stdio.h>
int Display(int No)
{
	int iDigit = 0,iSum = 0;
	while(No > 0)
	{
		iDigit = No%10;
		iSum = iSum + iDigit;
		No = No/10;
	}
	return iSum;
	
}
int DisplayR(int No)
{
	static int iDigit = 0;
	static int iSum = 0;
	if (No>0)
	{
		iDigit = No%10;
		iSum = iSum + iDigit;
		No = No/10;
		DisplayR(No);
		
	}
	return iSum;
	
	
}
int main()
{
	int iNo = 0,iRet = 0;
	printf("Enter a number:");
	scanf("%d",&iNo);
	iRet = Display(iNo);
	printf("%d",iRet);
	return 0;
}