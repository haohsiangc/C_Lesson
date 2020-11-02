#include <stdio.h>

int main(void)
{
	int integer1;
	int integer2;
	int integer3;
	
	printf("Enter the first integer\n");
	scanf("%d",&integer1);
	
	printf("Enter the second integer\n");
	scanf("%d",&integer2);
	
	printf("Enter the third integer\n");
	scanf("%d",&integer3);
	
	if(integer1+integer2>integer3&&integer1+integer3>integer2&&integer2+integer3>integer1)//&&>>and
	{
		int sum=integer1+integer2+integer3;
		printf("You got a triangle!!\nThe sum is %d",sum);
	}
	else
	{
		printf("Try again");
	}
}
