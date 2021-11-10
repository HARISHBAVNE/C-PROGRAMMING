// 1.Write a program which checks whether 15th bit is On or OFF.
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
	unsigned int imask = 0x00004000,result = 0;
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
		printf("15th Bit is on.\n");
		
	}
	else
	{
		printf("15th Bit is off.\n");
	}
	return 0;
}