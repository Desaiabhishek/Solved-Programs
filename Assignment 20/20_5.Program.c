//Accept number of rows and number of columns from user and display below pattern.

// output :
/*	
			1	2	3	4
			5	6	7	8
			9	10	11	12			
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0, j = 0,iCnt = 0;
	
	for(i = iRow; i > 0; i--)
	{
		for(j = 0; j < iCol; j++)
		{
			printf("%d\t",++iCnt);
		}
		printf("\n");
	}	
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter number of rows and columns :");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}