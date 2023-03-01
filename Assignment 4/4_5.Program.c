// write a program which accept number from user and return diference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iFactSum = 0, iNonFactSum = 0, iDiff = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iFactSum = iFactSum + iCnt;
		}
		else
		{
			iNonFactSum = iNonFactSum + iCnt;
		}
	}
	
	iDiff = iFactSum - iNonFactSum;
	
	return iDiff;
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