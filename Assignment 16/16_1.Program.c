//Accept N numbers from user and  accept one another number as No, check whether No is Present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FAlSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	
	if(iCnt < iLength)
	{
		return TRUE;
	}
	else
	{
		return FAlSE;
	}
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0,iValue = 0;
	int *p = NULL;
	BOOL bRet = FAlSE;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	printf("Enter the number : ");
	scanf("%d",&iValue);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	for(iCnt = 0; iCnt < iSize;iCnt++)
	{
		printf("Enetr element %d : ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p,iSize,iValue);
	
	if(bRet == TRUE)
	{
		printf("%d Number is Present",iValue);
	}
	else
	{
		printf("%d Number is Not Present",iValue);
	}
	
	free(p);
	
	return 0;
}