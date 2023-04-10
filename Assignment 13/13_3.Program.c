// Write a program which accept number from user and return the count of digits in between 3 and 7

#include<stdio.h>

int CountRange(int iNo)
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
		
		if(iDigit < 7 && iDigit > 3)
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
	
	iRet = CountRange(iValue);
	
	printf("count of digits in between 3 and 7 in number : %d",iRet);
	
	return 0;
}