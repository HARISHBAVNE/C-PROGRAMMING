// 4. Write a program which accept one number and position from user and
// toggle that bit. Return modified number.
// Input : 10 3
// Output : 14

#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int ino,int ipos)
{
	if((ipos < 1) || (ipos > 32))
	{
		return 0;
	}
	unsigned int imask = 0x00000001;
	unsigned int result = 0;
	
	imask = imask << (ipos-1);
	
	result = (imask) ^ (ino);
	
	return result;
	
	
}

int main()
{
	unsigned int ivalue = 0;
	unsigned int ret = 0;
	int ipos = 0;
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	printf("Enter a position.\n");
	scanf("%d",&ipos);
	
	ret = ToggleBit(ivalue,ipos);
	printf("%u",ret);
	
	return 0;
}