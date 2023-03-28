//Write a program which returns difference between Even Factorial and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
	int iCnt = 0,iEvenFact = 1,iOddFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 2; iCnt <= iNo;iCnt++)
	{
		if(iCnt % 2 == 0)
		{
			iEvenFact = iEvenFact * iCnt;
		}
		else
		{
			iOddFact = iOddFact * iCnt;
		}
	}
		
	return iEvenFact - iOddFact;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = FactorialDiff(iValue);
	
	printf("factorial Difference is %d",iRet);
	
	return 0;
	
}