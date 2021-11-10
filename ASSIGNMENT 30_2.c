// 2. Write a program which accept two numbers from user and display position
// of common ON bits from that two numbers.
// Input : 10 15 (1010 1111)
// Output : 2 4


#include<stdio.h>

void Countone(unsigned int ino1,unsigned int ino2)
{
	int i = 1;
	unsigned int imask = 0x00000001;
	
	unsigned int result = 0,result1 = 0;
	
	result = ino1 & ino2;
	
	for (i=1;i<33;i++)
	{
		result1 = imask & result;
		if (imask == result1)
		{
			printf("%d ",i);
		}
		imask = imask << 1;
	}

	
}

int main()
{
	unsigned int ivalue1 = 0,ivalue2 = 0;

	printf("Enter a number\n");
	scanf("%u",&ivalue1);
	
	printf("Enter a number\n");
	scanf("%u",&ivalue2);
	
	Countone(ivalue1,ivalue2);
	
	return 0;
}