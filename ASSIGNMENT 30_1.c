// 1.Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input : 11
// Output : 3
#include<stdio.h>

int Countone(unsigned int ino)
{
	int icnt = 0,i = 0;
	unsigned int imask = 0x00000001;
	
	unsigned int result = 0;
	for (i = 0;i<32;i++)
	{
		result = ino & imask;
		if (result == imask)
		{
			icnt++;
		}
		imask = imask << 1;
	}
	return icnt;
	
}

int main()
{
	unsigned int ivalue = 0;
	int ret = 0;
	printf("Enter a number\n");
	scanf("%u",&ivalue);
	
	ret = Countone(ivalue);
	printf("Number of on bits:%d",ret);
	
	return 0;
}