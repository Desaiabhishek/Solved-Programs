//Write a program which accept name from user and print that name

#include<stdio.h>

int main()
{
	char Name[30];
	
	printf("Please Enter full name :");
	scanf("%[^\n]",&Name);
	
	printf("Your name is %s",Name);
	
	return 0;
}