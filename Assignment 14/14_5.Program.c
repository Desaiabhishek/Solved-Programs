//Accept N numbers from user and display all such elements which are multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		if(Arr[iCnt]%11 == 0 )
		{
			printf("%d ",Arr[iCnt]);
		}
		
	}
}

int main()
{
	int iSize = 0, iCnt = 0;
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
	
	Display(p,iSize);
	
	free(p);
	
	return 0;
}