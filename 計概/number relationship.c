#include <stdio.h> 

int main(void)
{
	printf("Enter two integers,and I will tell you the relationship they satisfied\n");
	
	int num1;
	int num2;
	
	scanf("%d %d",&num1,&num2);
	
	if (num1==num2) 
	{
		printf("%d is equal to %d\n",num1,num2);
	}
	
	
}
