#include <stdio.h>
int main()
{
	int quan;
	float price;
	char name[10];
	printf("Enter Product Name : \n");
	scanf("%s", &name);
	printf("\nEnter Quantity : ");
	scanf("%d", &quan);
	printf("\n Enter Price : ");
	scanf("%f", &price);
	printf(" Product Name : %s \n", name);
	printf(" Quantity : %d \n", quan);
	printf(" Price : %.2f", price);
}
