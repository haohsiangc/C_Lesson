/*
*compute the probability of getting exactly k successes in n 
*(success/failure) trials with the probability of success p
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
double dbinom(int k,int n,double p);
long combn(int n,int k);
int main(){
    int k,n;
    double p;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter k:");
    scanf("%d",&k);
    printf("Enter p:");
    scanf("%lf",&p);
    printf("dbinom(%d,%d,%.2f)=%f\n",k,n,p,dbinom(k,n,p));
    system("pause");
    return 0;
}
double dbinom(int k,int n,double p){
    double dbin;
    dbin=combn(n,k)*pow(p,k)*pow((1-p),(n-k));
    return dbin;
}
long combn(int n,int k){
    int Cn_k=1;
    if(k>n-k){
        k=n-k;
    }
    for(int i=0;i<k;i++){
        Cn_k=Cn_k*(n-i)/(i+1);
    }
    return Cn_k;
}