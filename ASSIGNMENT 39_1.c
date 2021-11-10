// 1. Write a recursive program which accept string from user and count white
// spaces.
// Input : HE llo WOr lD
// Output : 3

#include<stdio.h>
// int WhiteSpace(char *str)
// {
	// int iCount = 0;
	// while(*str !='\0')
	// {
		// if (*str == ' ')
		// {
			// iCount ++;
		// }
		// str ++;
	// }
	// return iCount;
// }
int WhiteSpaceR(char *str)
{
	static int iCount = 0;
	if (*str !='\0')
	{
		if (*str == ' ')
		{
			iCount ++;
		}
		str ++;
		WhiteSpaceR(str);
	}
	
	return iCount;
}
int main()
{
	int iRet = 0;
	char arr[20];
	printf("Enter a string:");
	scanf("%[^'\n']s",arr);
	
	// iRet = WhiteSpace(arr);
	// printf("%d",iRet);
	// printf("\n************************\n");
	iRet = WhiteSpaceR(arr);
	printf("%d",iRet);
	
	return 0;
}