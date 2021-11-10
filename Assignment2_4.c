// 4. Accept two numbers from user and display first number in second
// number of times.
// Input : 12 5
// Output : 12 12 12 12 12
# include<stdio.h>
int Display(int iNo,int iFrequency)
{
	int iCnt = 0;
	for (iCnt = 1;iCnt<=iFrequency;iCnt++)
	{
		printf("%d",iNo);
	}
}
int main()
{
	int ivalue = 0;
	int iCount = 0;
	printf("Enter number");
	scanf("%d",&ivalue);
	printf("Enter frquency");
	scanf("%d",&iCount);
	Display(ivalue,iCount);
	return 0;
}