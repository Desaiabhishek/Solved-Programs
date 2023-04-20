//Accept N numbers from user and accept one another number as No,return frequency of No form it.

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt = 0,iFreq = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFreq++;
		}
	}
	return iFreq;
}

int main()
{
	int iSize = 0,iCnt = 0,iRet = 0,iValue = 0;
	int *p = NULL;
	
	printf("Enter number of elements  :");
	scanf("%d",&iSize);
	
	printf("\n Enter Number : ");
	scanf("%d",&iValue);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("\n unable to allocate memory");
		return -1;
	}
	
	for(iCnt = 0; iCnt < iSize;iCnt++)
	{
		printf("Enter element %d : ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Frequency(p,iSize,iValue);
	
	printf("%d",iRet);
	
	free(p);
	
	return 0;
}