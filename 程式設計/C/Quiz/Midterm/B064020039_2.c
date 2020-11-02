#include <stdlib.h>
#include <stdio.h>
void findPrime(int input1,int input2);
int main(){
    int num1,num2;
    printf("Enter two numbers(intervals):");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers between %d and %d are:",num1,num2);
    //num1必須小於num2才可以
    if(num1>num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    findPrime(num1,num2);
    system("pause");
    return 0;
}
void findPrime(int input1,int input2){
    //計數器
    int check=0;
    int theNumber,divisor;
    //檢查從2到100所有整數
	for(theNumber=input1;theNumber<=input2;theNumber++){  
		for(divisor=2;divisor<=theNumber;divisor++){ 
            //檢查theNumber跟divisor整除幾次，超過一次就不是質數 
			if(theNumber%divisor==0){ 
				check++;  
			}
		}
        //計數器只有計到一次就是質數(自己和自己整除)
		if(check==1){ 
            printf("%-3d",theNumber);
		}
        //計數器歸零 
		check=0;
	}
}