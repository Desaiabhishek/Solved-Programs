//Accept on character from user and check whether that character (a,e,i,o,u) or not

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
	if((cValue=='a'||cValue=='A')||(cValue=='e'||cValue=='E')||(cValue=='i'||cValue=='I')||(cValue=='o'||cValue=='O')||(cValue=='u'||cValue=='U'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter Character\n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("\n It is vowel");
	}
	else
	{
		printf("\n It is not vowel");
	}
	
	return 0;
}
	