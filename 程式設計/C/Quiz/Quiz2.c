#include <stdio.h>
int main() {
	int a, b, gcd;
	a = 64; 
	b = 30;
	printf("gcd(%d,%d) = ",a,b);
	while(b!=0){
		gcd=b; //��a�Mb���l�ƫ�A��b���ȵ��ܼ�a�A�]��a���j�A�M��A���誺�l�ƭȵ�b�A��a�Mb�i�H�~����l�ƪ���a�Mb�l�ƬO0 
		b=a%b;     
		a=gcd;   
	}
	printf("%d\n", gcd);
	return(0);
}
