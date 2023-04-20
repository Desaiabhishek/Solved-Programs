//Accept N numbers from user and return frequency of 11 form it.

#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength)
{
	int iCnt = 0,iFreq = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == 11)
		{
			iFreq++;
		}
	}
	return iFreq;
}

int main()
{
	int iSize = 0,iCnt = 0,iRet = 0;
	int *p = NULL;
	
	printf("Enter number of elements  :");
	scanf("%d",&iSize);
	
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
	
	iRet = Frequency(p,iSize);
	
	printf("%d",iRet);
	
	free(p);
	
	return 0;
}