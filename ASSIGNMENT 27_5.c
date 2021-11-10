// 5. Write a program which checks whether first and last bit is On or
// OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

bool checkbit(unsigned int ino)
{
	unsigned int imask = 0x80000001;
	unsigned int result = 0;
	
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
	bool bret = true;
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	bret = checkbit(ivalue);
	
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