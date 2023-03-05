//write a program which accept number from user and return summation of  all its non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iFact = 0,iNonFact = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iFact = iFact + iCnt;
		}
		else
		{
			iNonFact = iNonFact + iCnt;
		}
	}
	return iFact - iNonFact;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("Difference between factors and non factors are : %d",iRet);
	
	return 0;
}