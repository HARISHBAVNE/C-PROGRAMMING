// 3. Write a recursive program which accept string from user and count number
// of characters.
// Input : Hello
// Output : 5

#include<stdio.h>
int StrLen(char *str)
{
	int Count = 0;
	while(*str != '\0')
	{
		if (((*str >='A')&&(*str <='Z'))||((*str >='a')&&(*str <='z')))
		{
			Count ++;
			str ++;
		}
	}
	return Count;
	
}
int StrLenR(char *str)
{
	static int Count = 0;
	
	if (*str != '\0')
	{
		if (((*str >= 'A')&&(*str <='Z'))||((*str>='a')&&(*str<='z')))
		{
			Count ++;
			str ++;
		}
		StrLenR(str);
	}
	return Count;
	
	
}
int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter a string:");
	scanf("%s",arr);
	iRet = StrLenR(arr);
	printf("%d",iRet);
	return 0;
}