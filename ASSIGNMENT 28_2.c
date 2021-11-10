// 2. Write a program which accept one number from user and off 7th and 10th
// bit of that number. Return modified number.
// Input : 577
// Output : 1

#include<stdio.h>
#include<stdbool.h>

unsigned int offbit(unsigned int ino)
{
	unsigned int imask = 0xFFFFFDBF;
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