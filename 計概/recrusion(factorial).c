#include <stdio.h>
unsigned long long int factorial(unsigned number);
int main()
{
	unsigned int i;
	printf("Enter a number : ");
	scanf("%u",&i);
	printf("%u!=%u",i,factorial(i));
}
unsigned long long int factorial(unsigned int number)
{
	if(number<=1){
		return 1;
	}
	else{
		return (number*factorial(number-1)); 
	}
}
