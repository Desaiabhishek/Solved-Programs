//Write a program which accept range from user and return addition of  all numbers in between that range.(range should contains positive numbers only)

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
	int iCnt = 0,iSum = 0;
	
	if(iStart <= iEnd && iStart > 0)
	{
		for(iCnt = iStart; iCnt <= iEnd;iCnt++)
		{
			iSum = iSum + iCnt;
		}
	}
	else
	{
		printf("Invalid Range");
	}
	
	return iSum;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter Starting Point : ");
	scanf("%d",&iValue1);
	
	printf("Enter ending point : ");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1,iValue2);
	
	printf("\n Addition is %d",iRet);
	
	return 0;
}