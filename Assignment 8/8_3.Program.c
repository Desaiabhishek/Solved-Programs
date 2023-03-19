// Write a program to find factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
	int iCnt = 0, iFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo; iCnt >= 1;iCnt--)
	{
		iFact = iFact * iCnt;
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("%d",iRet);
	
	return 0;
}