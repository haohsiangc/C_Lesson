#include <stdio.h>
int gcd(int x,int y)
{
	int low,high,a,b;
	if(x>y){
		high=x;
		low=y;
	}
	if(y>x){
		high=y;
		low=x;
	}
	for(a=1;a<=low;a++){
		if(high%a==0&&low%a==0){
			b=a;
		}
	}
	return b;
}
int main()
{
	int i,j;
	for(i=1;i<=50;i++){
		j=100-i;
		printf("The gcd of %d and %d is %d\n",i,j,gcd(i,j));
	}
}
