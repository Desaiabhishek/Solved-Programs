//Write a program which accept distance in kilometer and convert it into meter.

#include<stdio.h>
#define Meter 1000

int KMtoMeter(int iNo)
{
	return iNo * Meter;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	
	printf("Enter Distance : ");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);

	printf("Area of Reactangle is : %d",iRet);
	
	return 0;
}