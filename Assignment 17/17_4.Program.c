//Accept N numbers from user and display all such numbers which contains 3 digitsin it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0;iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
		{
			printf("%d\t",Arr[iCnt]);
		}
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
	
	Digits(ptr,iSize);
	
	free(ptr);
	
	return 0;
}