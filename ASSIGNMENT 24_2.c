// 2.Write a program which accept string from user and convert it into
// upper case.
// Input : “Marvellous Multi OS”
// Output : MARVELLOUS MULTI OS

#include<stdio.h>
void struprX(char str[])
{
	while(*str != '\0')
	{
		if ((*str >='a')&&(*str <= 'z'))
		{
			*str = *str - 32;
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
	struprX(arr);
	printf("%s",arr);
	
	return 0;
}