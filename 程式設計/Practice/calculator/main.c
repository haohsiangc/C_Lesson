#include <stdio.h>
#include <assert.h>
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
void Test();
int main(int argc,char *argv[]){
	int num1,num2;
	int cal;
	num1=strtol(argv[1],NULL,10);
	num2=strtol(argv[2],NULL,10);
	printf("please select a number:\n1.+ 2.- 3.* 4./:");
	scanf("%d",&cal);
    switch(cal){
		case 1:
			printf("%d\n",plus(&num1,&num2));
			break;
		case 2:
			printf("%d\n",minus(&num1,&num2));
			break;
		case 3:
			printf("%d\n",times(&num1,&num2));
			break;
		case 4:
			printf("%d\n",divide(&num1,&num2));
			break;
		default:
			printf("You should enter a number in 1~4\n");
			
    }
	Test();
	return 0;
}
void Test(){
	int num1=80;
	int num2=40;
	assert(plus(&num1,&num2)==120);
	assert(minus(&num1,&num2)==40);
	assert(times(&num1,&num2)==3200);
	assert(divide(&num1,&num2)==2);
}
