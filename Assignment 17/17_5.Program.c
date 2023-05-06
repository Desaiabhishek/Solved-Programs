//Accept N numbers from user and display summation of digits og each number.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
	int iCnt = 0,iSum = 0 ,iDigit = 0;
	
	for(iCnt = 0;iCnt < iLength; iCnt++)
	{
		while(Arr[iCnt] > 0)
		{
			iDigit = Arr[iCnt] % 10;
			iSum = iSum + iDigit;
			Arr[iCnt] = Arr[iCnt] / 10;
		}
			printf("%d\t",iSum);
			iSum = 0;
	}
}

int main()
{
	
	int iSize = 0,iCnt = 0;
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
	
	DigitsSum(ptr,iSize);
	
	free(ptr);
	
	return 0;
}