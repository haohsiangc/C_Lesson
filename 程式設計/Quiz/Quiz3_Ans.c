#include <stdio.h>
#include <stdlib.h>
long combn(int n, int k);
int main(void) {
    printf("%ld \n", combn(100, 5) );
    system ("pause");
    return(0);
}
long combn(int n, int k){
    long c_nk = 1; // initial value
    int i; // iterator

    // C(n, k) = C(n, n - k). If k > (n - k), replace k with n-k
    if( k > (n - k) ){
        k = n - k;
    }
    // C(n, k)) = n! / ((n-k)! k!)
    for(i = 0 ; i < k ; ++i){
        c_nk = c_nk * (n - i) / (i + 1) ;
    }
    return(c_nk);
}
