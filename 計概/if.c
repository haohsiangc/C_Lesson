#include<stdio.h>

int main(void)
{
	int integer1;
	int integer2;
	
	printf("Enter first integer\n");
	scanf("%d",&integer1);
	
	printf("Enter second integer2\n");
	scanf("%d",&integer2);
	
	int devision;
	devision=integer1/integer2;
	
	//printf("Devision is %d\n",devision);
	
	int remainder;//remainder>>¾l¼Æ 
	remainder=integer1%integer2;
	
	if(remainder!=0)
	{
		printf("Remainder in %d\nDevision is %d",remainder,devision);
	}
	
}
