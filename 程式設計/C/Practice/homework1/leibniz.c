/*
*computes ratio of the circumference of a circle to 
*its diameter Pi given a k value
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
double leibniz(int input);
int main(){
    int k;
    printf("Enter k:");
    scanf("%d",&k);
    printf("leibnin(%d)=%f\n",k,leibniz(k));
    system("pause");
    return 0;
}
double leibniz(int input){
    double Pi=0;
    for(int n=0;n<=input;n++){
        Pi=Pi+pow(-1,n)/(2*n+1);
    }
    return 4*Pi;
}