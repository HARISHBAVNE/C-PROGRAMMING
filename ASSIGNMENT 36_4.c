// 4.Write a recursive program which display below pattern.
// Output : A B C D E F

#include<stdio.h>
void Display()
{
	char i = 'A';
	while(i<='F')
	{
		printf("%c\t",i);
		i++;
	}
	
}
void DisplayR()
{
	static char i = 'A';
	if (i<='F')
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