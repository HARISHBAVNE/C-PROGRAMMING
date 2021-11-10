// 3. Write a program which accept one number from user and check whether
// 9th or 12th bit is on or off.
// Input : 257
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int ino)
{
	int icnt = 0,i = 0;
	unsigned int imask1 = 0x00000100;
	unsigned int imask2 = 0x00000800;
	
	unsigned int result1 = 0,result2 = 0;
	
	result1 = imask1 & ino;
	result2 = imask2 & ino;
	
	if ((result1 == imask1) || (result2 == imask2))
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
	bool bret = 0;
	printf("Enter a number\n");
	scanf("%u",&ivalue);
	
	bret = CheckBit(ivalue);
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