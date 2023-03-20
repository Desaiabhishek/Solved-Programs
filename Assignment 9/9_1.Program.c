//Write a program which accept number from user and display below pattern

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	iNo = iNo * 2;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 0; iCnt < iNo;iCnt++)
	{
		if( iCnt < iNo/2)
		{
			printf("* ");
		}
		else
		{
			printf("# ");
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}