//Accept amount in US dollar and return its corresponding value in Indian currency.
//consider 1$ as 70 rupees.

#include<stdio.h>

#define INR 70

int DollerToINR(int iNo)
{
	return iNo * INR;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter number of USD : ");
	scanf("%d",&iValue);
	
	iRet = DollerToINR(iValue);
	
	printf("Value in INR is %d",iRet);
	
	return 0;
}