// 5. Write a program which accept one number from user and range of
// positions from user. Toggle all bits from that range.
// Input : 897 9 13
// Toggle all bits from position 9 to 13 of input number ie 879.


#include<stdio.h>
#include<stdbool.h>

unsigned int CheckBit(unsigned int ino,int start,int end)
{
	int i = 0;
	unsigned int imask = 0x00000001;
	unsigned int mask = 0x00000000;
	unsigned result = 0;
	for (i = start;i<end+1;i++)
	{
		imask = imask << (i-1);
		mask = mask | imask;
		imask = 0x00000001;
	}
	result = ino ^ mask;
	
	return result;
	
}


int main()
{
	unsigned int ivalue = 0;
	unsigned int ret = 0;
	int pos1 = 0,pos2 = 0;
	printf("Enter a number\n");
	scanf("%u",&ivalue);
	
	printf("Enter first position\n");
	scanf("%d",&pos1);
	
	printf("Enter second position\n");
	scanf("%d",&pos2);
	
	ret = CheckBit(ivalue,pos1,pos2);
	
	printf("%u",ret);
	return 0;
}