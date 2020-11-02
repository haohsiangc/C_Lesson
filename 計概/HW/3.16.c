#include <stdio.h>
int main()
{
	float T;
	char month[20];
	printf("Enter total amount collected,-1 to end:");
	scanf("%f",&T);
	
	while(T!=-1){	
		printf("Enter name of month:");
		scanf("%20s",&month);
		printf("\nThe data of %s", month);
		
		printf("\nTotal Collections:%.2f",T);
		printf("\nSales:%.2f",T*0.917);
		printf("\nCounty Sales Tax:%.2f",T*0.917*0.05);
		printf("\nState Sales Tax:%.2f",T*0.917*0.04);
		printf("\nTotal sales Tax Collected:%.2f\n",T*0.917*0.05+T*0.917*0.04);
		
		printf("\nEnter total amount collected,-1 to end:");
		scanf("%f",&T);
	}
}
