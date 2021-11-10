// 5. Write a recursive program which accept number from user and return its
// reverse number.
// Input : 523
// Output : 325

#include<stdio.h>
int Reverse(int iNo)
{
	int Rev = 0;
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo%10;
		Rev = (Rev*10)+iDigit;
		iNo = iNo/10;
		Reverse(iNo);
	}
	return Rev;
	
}
int ReverseR(int iNo)
{
	static int Rev = 0;
	static int iDigit =0;
	if (iNo != 0)
	{
		iDigit = iNo%10;
		Rev = (Rev * 10)+iDigit;
		iNo = iNo/10;
		
		ReverseR(iNo);
	}
	return Rev;
}

int main()
{
	int iRet = 0;
	int iNo = 0;
	printf("Enter a  Number:");
	scanf("%d",&iNo);
	iRet = ReverseR(iNo);
	printf("Reverse Number is:%d",iRet);

	return 0;
}