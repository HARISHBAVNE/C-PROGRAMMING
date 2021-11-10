// 5. Write a program which accept one number from user and toggle contents
// of first and last nibble of the number. Return modified number. (Nibble is a
// group of four bits)

#include<stdio.h>
#include<stdbool.h>

unsigned int ToggleBit(unsigned int ino)
{
	unsigned int imask = 0xF000000F;
	unsigned int result = 0;
	
	result = (imask) ^ (ino);
	
	return result;
	
}

int main()
{
	unsigned int ivalue = 0;
	unsigned int ret = 0;
	
	printf("Enter a number\n");
	scanf(" %u",&ivalue);
	
	ret = ToggleBit(ivalue);
	printf("%u",ret);
	
	return 0;
}