#include<stdio.h>

int main(void)
{
	int integer1;
	int integer2;
	
	printf("Enter first integer\n");
	scanf("%d",&integer1); //d:decimal integer &:�i�D�{����integer1�̭����F�� 
	
	printf("Enter second integer2\n");
	scanf("%d",&integer2);
	
	int sum;
	sum=integer1+integer2;//= is assign,not equal
	
	printf("Sum is %d\n",sum); //%d=sum
}
