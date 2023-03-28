//Write a program to find odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
	int iCnt = 0,iOddFact = 1;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = iNo; iCnt >= 1;iCnt--)
	{
		if(iCnt % 2 != 0)
		{
			iOddFact = iOddFact * iCnt;
		}
	}
		
	return iOddFact;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = OddFactorial(iValue);
	
	printf("Odd factorial of number is %d",iRet);
	
	return 0;
	
}