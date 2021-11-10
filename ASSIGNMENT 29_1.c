// 1.Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input : 10 2
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

bool checkBit(unsigned int ino,int ipos)
{
	if((ipos < 1) || (ipos > 32))
	{
		return 0;
	}
	unsigned int imask = 0x00000001;
	unsigned int result = 0;
	
	imask = imask << (ipos-1);
	
	result = (imask) & (ino);
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
	unsigned int ivalue = 0;
	bool bret = false;
	int ipos = 0;
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	printf("Enter a position.\n");
	scanf("%d",&ipos);
	
	bret = checkBit(ivalue,ipos);
	if (bret == true)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	
	return 0;
}