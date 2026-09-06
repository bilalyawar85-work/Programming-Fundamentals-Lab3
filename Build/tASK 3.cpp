#include<stdio.h>
int main()
{
int age;
float height;
char ch;
printf("Enter your Age :  \n");
scanf("%d", &age);
printf("Enter Your Height : \n");
scanf("%f", &height);
printf("Enter Your Grade : \n");
scanf(" %c", &ch);
printf("Age: %d\n", age);
printf("Height : %.1f\n", height);
printf("Grade : %c\n", ch);
}
