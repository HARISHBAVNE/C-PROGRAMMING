// 3. Write a recursive program which accept string from user and count number
// of small characters.
// Input : HElloWOrlD
// Output : 5

#include<stdio.h>
int Small(char *str)
{
	int Count = 0;
	while(*str!='\0')
	{
		if ((*str >='a')&&(*str <='z'))
		{
			Count ++;
		}
		str ++;
	}
	return Count;
	
}
int SmallR(char *str)
{
	static int Count = 0;
	if (*str != '\0')
	{
		if ((*str >='a')&&(*str <='z'))
		{
			Count ++;
		}
		str ++;
		SmallR(str);
	}
	return Count;
}

int main()
{
	int iRet = 0;
	char arr[20];
	printf("Enter a  string:");
	scanf("%[^'\n']s",arr);
	iRet = SmallR(arr);
	printf("Number of small characters:%d",iRet);
	
	return 0;
}