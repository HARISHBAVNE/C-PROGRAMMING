// 5. Write a recursive program which accept number from user and return its
// product of digits.
// Input : 523
// Output : 30

#include<stdio.h>
int Mult(int No)
{
	int DigitMult = 1;
	int iDigit = No;
	while(No>0)
	{
		iDigit = No%10;
		if (iDigit == 0)
		{
			iDigit = 1;
		}
		DigitMult = DigitMult * iDigit;
		No = No/10;
	}
	return DigitMult;
}
int MultR(int No)
{
	static int DigitMult = 1;
	static int iDigit = 0;
	if (No>0)
	{
		iDigit = No%10;
		if (iDigit == 0)
		{
			iDigit = 1;
		}
		DigitMult = DigitMult * iDigit;
		No = No/10;
		MultR(No);
	}
	return DigitMult;
	
	
}
int main()
{
	int iRet = 0;
	int iNo = 0;
	
	printf("Enter a Number:");
	scanf("%d",&iNo);
	iRet = MultR(iNo);
	printf("%d",iRet);
	
	return 0;
}