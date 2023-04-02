//Write a program which accept area in square feet and convert it into square meter.

#include<stdio.h>

#define SQMetre 0.0929

double SquareMeter(int iNo)
{
	return iNo * SQMetre;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;	
	
	printf("Enter area in square feet : ");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);

	printf("Square Meter is : %lf",dRet);
	
	return 0;
}