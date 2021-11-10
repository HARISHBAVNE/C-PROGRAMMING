// 2. Write a recursive program which accept number from user and return
// largest digit
// Input : 87983
// Output : 9

#include<stdio.h>
int Max(int iNo)
{
	int iMax = 0;
	int iDigit = 0;
	while(iNo > 0)
	{
		iDigit = iNo%10;
		if(iDigit>iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo/10;
		
	}
	return iMax;
	
}
int MaxR(int iNo)
{
	static int iDigit = 0;
	static int iMax = 0;
	if (iNo>0)
	{
		iDigit = iNo%10;
		if (iDigit > iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo/10;
		MaxR(iNo);
	}
	return iMax;
}

int main()
{
	int iNo = 0,iRet = 0;
	printf("Enter a number:");
	scanf("%d",&iNo);
	iRet = MaxR(iNo);
	printf("Largest digit is:%d",iRet);
	
	return 0;
}