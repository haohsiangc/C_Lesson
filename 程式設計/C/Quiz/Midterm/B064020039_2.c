#include <stdlib.h>
#include <stdio.h>
void findPrime(int input1,int input2);
int main(){
    int num1,num2;
    printf("Enter two numbers(intervals):");
    scanf("%d %d",&num1,&num2);
    printf("Prime numbers between %d and %d are:",num1,num2);
    //num1�����p��num2�~�i�H
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
    //�p�ƾ�
    int check=0;
    int theNumber,divisor;
    //�ˬd�q2��100�Ҧ����
	for(theNumber=input1;theNumber<=input2;theNumber++){  
		for(divisor=2;divisor<=theNumber;divisor++){ 
            //�ˬdtheNumber��divisor�㰣�X���A�W�L�@���N���O��� 
			if(theNumber%divisor==0){ 
				check++;  
			}
		}
        //�p�ƾ��u���p��@���N�O���(�ۤv�M�ۤv�㰣)
		if(check==1){ 
            printf("%-3d",theNumber);
		}
        //�p�ƾ��k�s 
		check=0;
	}
}