// 4. Write a program which accept one number , two positions from user and
// check whether bit at first or bit at second position is ON or OFF.
// Input : 10 3 7
// Output : TRUE

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int ino,int pos1,int pos2)
{
	int icnt = 0,i = 0;
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	
	unsigned result1 = 0,result2 = 0;
	
	imask1 = imask1<<(pos1-1);
	imask2 = imask2<<(pos2-1);

	result1 = ino & imask1;
	result2 = ino & imask2;
	
	if((result1 == imask1) || (result2 == imask2))
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
	int pos1 = 0,pos2 = 0;
	printf("Enter a number\n");
	scanf("%u",&ivalue);
	
	printf("Enter first position\n");
	scanf("%d",&pos1);
	
	printf("Enter second position\n");
	scanf("%d",&pos2);
	
	bret = CheckBit(ivalue,pos1,pos2);
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