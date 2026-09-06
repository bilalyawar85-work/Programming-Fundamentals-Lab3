#include<stdio.h>
int main()
{
	int age; 
	float height, gpa;
	char grade;
	char name[50];
	printf("Enter Your Name :\n ");
    fgets(name, 50, stdin);
    printf(" Enter Age :\n ");
    scanf("%d", &age);
    printf("Enter Height :\n ");
    scanf("%f", &height);
    printf("Enter Grade :\n ");
    scanf(" %c", &grade);
    printf("Enter CGPA :\n ");
    scanf("%f", &gpa);
    
    printf("==================STUDENT REPORT==================\n");
    printf("Name : ");
    puts(name);
    printf("\n Age : %d", age);
    printf("\n Height : %.2f", height);
    printf("\n Grade : %c", grade);
    printf("\n CGPA : %.2f", gpa);
    
}
