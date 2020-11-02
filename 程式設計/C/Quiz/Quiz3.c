#include <stdlib.h>
#include <stdio.h>
unsigned long long int combn(int n, int k);
int main(){
    int integer1,integer2;
    printf("Enter two integer to calculate their combination\n");
    printf("integer 1:");
    scanf("%d",&integer1);
    printf("integer 2:");
    scanf("%d",&integer2);
    while(integer1<0||integer2<0||integer1<integer2){
        printf("integer 1 must larger than integer 2 and they must larger than 0");
        printf("integer 1:");
        scanf("%d",&integer1);
        printf("integer 2:");
        scanf("%d",&integer2);
    }
    printf("combn(%d,%d)=%d\n",integer1,integer2,combn(integer1,integer2));
    system("pause");
    return 0;
}
unsigned long long int combn(int n,int k){
    int c_nk=1;
    // C(n, k) = C(n, n - k). If k > (n - k), replace k with n-k
    if(k>(n-k)){
        k=n-k;
    }
    // C(n, k)) = n! / ((n-k)! k!)
    for(int i = 0 ; i < k ; ++i){
        c_nk = c_nk * (n - i) / (i + 1) ;
    }
    return(c_nk);
}
