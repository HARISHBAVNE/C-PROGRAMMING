// 5.Write a recursive program which display below pattern.
// Output : a b c d e f

#include<stdio.h>
void Display()
{
	char i = 'a';
	while(i<='f')
	{
		printf("%c\t",i);
		i++;
	}
	
}
void DisplayR()
{
	static char i = 'a';
	if (i<='f')
	{
		printf("%c\t",i);
		i ++;
		DisplayR();
	}
	
}
int main()
{
	DisplayR();
	return 0;
}