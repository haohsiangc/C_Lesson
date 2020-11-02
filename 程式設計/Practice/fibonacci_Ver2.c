#include <stdio.h>
int main(){
	int n;
	printf("Enter a number,the program will list the result of Fibonacci(Fn):");
	scanf("%d",&n);
	int i,value,fn_1,fn_2;
	for(i=1;i<=n;i++){
		switch(i){
			case 1:
				value=1;
				break;
			case 2:
				//store the value of F1
				fn_1=value;
				//F2=1
				value=1;
				break;
			default:
				fn_2=fn_1;
				fn_1=value;
				value=fn_1+fn_2;
				break;
		}
		printf("F%d = %d\n",i,value);
	}
}
