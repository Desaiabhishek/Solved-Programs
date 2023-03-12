//Write a program which accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(float iNo1,float iNo2)
{
	float fPer = 0.0;
	
	if(iNo1 >= iNo2)
	{	
		fPer = (iNo2 / iNo1) * 100;
	
	}
	else
	{
		printf("obtained marks is greater than total Marks");
	}
	
	return fPer;
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	float fRet = 0.0;
	
	printf("Please Enter total marks :");
	scanf("%d",&iValue1);
	
	printf("Please Enter obtained marks :");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1,iValue2);
	
	printf("Percentage is : %0.2f ",fRet);
	
	return 0;
}