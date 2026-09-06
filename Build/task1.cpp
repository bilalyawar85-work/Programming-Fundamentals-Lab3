#include <stdio.h>
int main()
{
char name[10], city[10];
int age;
printf("Enter Your Name:\n");
scanf("%s", &name);
   printf("Enter Your Age:\n");
    scanf("%d", &age);
printf("Enter Your City:\n");
scanf("%s", &city);
printf("Name : %s \n Age : %d \n City : %s \n", name, age, city);
return 0;

}

