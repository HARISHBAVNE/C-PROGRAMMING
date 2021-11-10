// 1.Write a program which accept one number from user and off 7th bit of that
// number if it is on. Return modified number.
// Input : 79
// Output : 15

#include<stdio.h>
#include<stdbool.h>

unsigned int offbit(unsigned int ino)
{
	unsigned int imask = 0xFFFFFFBF;
	unsigned int result = 0;
	
	result = (imask) & (ino);
	return result;
	
}

int main()
{
	unsigned int ivalue = 0;
	unsigned int ret = 0;
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	ret = offbit(ivalue);
	printf("%u",ret);
	

	return 0;
}