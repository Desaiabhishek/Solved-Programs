//Accept N numbers from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
	int iMin = Arr[0],iMax = Arr[0],iCnt = 0;
	
	for(iCnt = 0;iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > iMax)
		{
			iMax = Arr[iCnt];
		}
		
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	
	return iMax - iMin;
}

int main()
{
	
	int iSize = 0, iRet = 0,iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter Number of elements : ");
	scanf("%d",&iSize);
	
	ptr = (int *)malloc(sizeof(int) * iSize);
	
	if(ptr == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements \n",iSize);
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		printf("Enter elements %d : ",iCnt+1);
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Difference(ptr,iSize);
	
	printf("difference is : %d",iRet);
	
	free(ptr);
	
	return 0;
}