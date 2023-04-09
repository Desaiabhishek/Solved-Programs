// Write a program which accept number from user and return the count of odd digits

#include<stdio.h>

int CountOdd(int iNo)
{
	int iDigit = 0,iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		
		if(iDigit%2 != 0)
		{
			iCnt++;
		}
	}
	
	return iCnt;
	
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	
	printf("Count of odd digits in number : %d",iRet);
	
	return 0;
}