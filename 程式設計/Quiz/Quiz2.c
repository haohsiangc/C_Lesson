#include <stdio.h>
int main() {
	int a, b, gcd;
	a = 64; 
	b = 30;
	printf("gcd(%d,%d) = ",a,b);
	while(b!=0){
		gcd=b; //讓a和b取餘數後，把b的值給變數a，因為a較大，然後再把剛剛的餘數值給b，讓a和b可以繼續取餘數直到a和b餘數是0 
		b=a%b;     
		a=gcd;   
	}
	printf("%d\n", gcd);
	return(0);
}
