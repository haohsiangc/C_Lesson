#include <stdio.h>

int gcd(int num1,int num2);
int main()
{
	int i,j;
	printf("number 1 is : ");
	scanf("%d",&i);
	printf("number 2 is : ");
	scanf("%d",&j);
	if(i>j){
		printf("The gcd of %d and %d is : %d",i,j,gcd(i,j));
	}
	else{
		printf("The gcd of %d and %d is : %d",i,j,gcd(j,i));
	}
}
int gcd(int num1,int num2)
{
	if(num1%num2==0){
		return num2;
	}
	else{
		return gcd(num2,num1%num2);
	}
}
