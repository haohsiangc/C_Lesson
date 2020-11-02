//find Least Common Multiple of given two integer numbers
#include <stdlib.h>
#include <stdio.h>
int gcd(int num1,int num2);
int lcm(int num1,int num2);
int main(){
    int integer1,integer2;
    printf("Enter two integers\n");
    printf("integer1:");
    scanf("%d",&integer1);
    printf("integer2:");
    scanf("%d",&integer2);
    printf("lcm(%d,%d)=%d",integer1,integer2,lcm(integer1,integer2));
    system("pause");
    return 0;
}
int lcm(int num1,int num2){
    return (num1*num2)/gcd(num1,num2);
}
int gcd(int num1,int num2){
    if(num1%num2==0){
        return num2;
    }
    else{
        return gcd(num2,num1%num2);
    }
}
