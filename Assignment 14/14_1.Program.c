//Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int iCnt = 0, iSumEven = 0,iSumOdd = 0;
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt]%2 == 0)
		{
			iSumEven = iSumEven + Arr[iCnt];
		}
		else
		{
			iSumOdd = iSumOdd + Arr[iCnt];
		}
	}
	
	return iSumEven - iSumOdd;
}

int main()
{
	int iSize = 0,iRet = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	p = (int *)malloc(sizeof(int) * iSize);
	
	if(p == NULL)
	{
		printf("\n Unable to allocate memoery");
		return -1;
	}
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		printf("\n Enter element %d : ",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet = Difference(p,iSize);
	
	printf("\n Result is %d",iRet);
	
	free(p);
	
	return 0;
}