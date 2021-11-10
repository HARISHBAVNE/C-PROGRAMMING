// 2. Write a program which checks whether 5th & 18th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
	unsigned int imask = 0x00020010,result = 0;
	result = imask & iNo;
	if (result == imask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	unsigned int iValue = 0;
	bool bret = false;
	
	printf("Enter a number \n");
	scanf("%u",&iValue);
	
	bret = CheckBit(iValue);
	
	if (bret == true)
	{
		printf("Bits are on.\n");
		
	}
	else
	{
		printf("Bits are off.\n");
	}
	return 0;
}