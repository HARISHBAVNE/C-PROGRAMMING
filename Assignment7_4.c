// Q4.Write a program which accept number from user and return multiplication of all
// digits.
// Input : 2395
// Output : 270
// Input : 1018
// Output : 0

#include <stdio.h>
int MultDigits(int iNo)
{
	int iMult = 1;
	int iDigit = 0;
	
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if (iNo == 0)
	{
		return 1;
	}
	while (iNo > 0)
	{
		iDigit = iNo%10;
		iMult = iMult * iDigit;
		iNo = iNo/10;
	}
	return iMult;
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	printf("%d",iRet);
	
	return 0;
}