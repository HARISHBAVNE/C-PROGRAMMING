// 2. Write a program which accept one number and position from user and off
// that bit. Return modified number.
// Input : 10 2
// Output : 8

#include<stdio.h>
#include<stdbool.h>

unsigned int OffBit(unsigned int ino,int ipos)
{
	if((ipos < 1) || (ipos > 32))
	{
		return 0;
	}
	unsigned int imask = 0x00000001;
	unsigned int result = 0;
	
	imask = imask << (ipos-1);
	imask = ~imask;
	
	result = (imask) & (ino);
	
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
	
	ret = OffBit(ivalue,ipos);
	printf("%u",ret);
	
	return 0;
}