#include <stdio.h>
int fib(int number);
int main(){
	int num;
	printf("Enter a number,the program will list the result of Fibonacci(Fn):");
	scanf("%d",&num);
	for(int n=1;n<=num;n++){
		printf("F%d = %d\n",n,fib(n));
	}
	return(0);
}
int fib(int number){
	int a=0,b=1,value,step=1;
	while(step<=number){
		value=a+b;
		b=a;
		a=value;
		step++;
	}
	return value;
}
