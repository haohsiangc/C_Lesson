#include <stdlib.h>
#include <stdio.h>
int main(){
	int number1,number2;
	int big,small,remainder;
	int LCM;
	printf("Enter two number to calculate their GCD&LCM\n");
	printf("number 1:");
	scanf("%d",&number1);
	printf("number 2:");
	scanf("%d",&number2);
	if(number1>number2){
		big=number1;
		small=number2;
	}
	else{
		big=number2;
		small=number1;
	}
	while(big%small!=0){
		remainder=big%small;
		big=small;
		small=remainder;
	}
	LCM=small*(number1/small)*(number2/small);
	printf("GCD is %d\n",small);
	printf("LCM is %d\n",LCM);
	system("pause");
	return (0);
}
