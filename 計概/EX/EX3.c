#include <stdio.h>
int main(void)
{
	int a;
	printf("Enter a number and i will tell you it is odd or even\n");
	printf("number is ");
	scanf("%d",&a);
	
	int b=a%2;
	if(b==0){
		printf("it is even");
	}
	if(b==1){
		printf("it is odd");
	}
}


