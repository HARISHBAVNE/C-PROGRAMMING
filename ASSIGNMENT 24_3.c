// 3.Write a program which accept string from user and toggle the case.
// Input : “Marvellous Multi OS”
// Output : mARVELLOUS mULTI os

#include<stdio.h>
void strtoggleX(char str[])
{
	while(*str != '\0')
	{
		if ((*str >='a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		else if ((*str >='A')&&(*str <= 'Z')) 
		{
			*str = *str + 32;
		}
		else
		{
			*str = *str;
		}
		str ++;
	}
	
}

int main()
{
	char arr[20];
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	strtoggleX(arr);
	printf("%s",arr);
	
	return 0;
}