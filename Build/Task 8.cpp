#include<stdio.h>

int main()
{
	printf("Enter Your Full Name : ");
	char Name[100];
	fgets(Name, 100, stdin);
	printf(" Hello, \n ");
	puts(Name);
}
