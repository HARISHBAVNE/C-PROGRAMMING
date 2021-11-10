// 4. Write a recursive program which accept number from user and return
// smallest digit
// Input : 87983
// Output : 3

#include<stdio.h>
int Min(int iNo)
{
	int Min = 9;
	int iDigit = 0;
	while(iNo != 0)
	{
		iDigit = iNo%10;
		if (iDigit < Min)
		{
			Min = iDigit;
		}
		iNo = iNo/10;
		
	}
	return Min;
	
}
int MinR(int iNo)
{
	static int Min = 9;
	static int iDigit =0;
	if (iNo != 0)
	{
		iDigit = iNo%10;
		if (iDigit < Min)
		{
			Min = iDigit;
		}
		iNo = iNo/10;
		
		MinR(iNo);
	}
	return Min;
}

int main()
{
	int iRet = 0;
	int iNo = 0;
	printf("Enter a  Number:");
	scanf("%d",&iNo);
	iRet = MinR(iNo);
	printf("Smallest digit is:%d",iRet);

	return 0;
}