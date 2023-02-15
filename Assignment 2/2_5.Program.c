//Accept number from user and check whether number even or odd

#include<stdio.h>

#define True 1
#define False 0

typedef int Bool;

Bool ChkEven(int iNo)
{
    if( iNo % 2 == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int iValue = 0;
    Bool bRet = False;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == True)
    {
        printf("%d Number is Even",iValue);
    }
    else
    {
        printf("%d Number is Odd",iValue);
    }

    return 0;
}
