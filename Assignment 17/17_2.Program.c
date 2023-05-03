//Accept N numbers from user and return the smallest number.

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int iMin = Arr[0],iCnt = 0;
	
	for(iCnt = 0;iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	
	return iMin;
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
	
	iRet = Minimum(ptr,iSize);
	
	printf("smallest number is : %d",iRet);
	
	free(ptr);
	
	return 0;
}