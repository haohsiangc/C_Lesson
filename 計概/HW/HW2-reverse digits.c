#include <stdio.h>

int reverseDigits(int n);
int reverseDigitsVer2(int n);

int main()
{
	int number;
	printf("Enter a number brtween 1 and 9999 : ");
	scanf("%d",&number);
	
	printf("The number with its digits reversed is : %d\n",reverseDigits(number)); 
	printf("The number with its digits reversed is(Use Ver2) : %d",reverseDigitsVer2(number));
}
int reverseDigits(int n)
{
	int reverse;
	if(n>=1000){
		reverse=(n%10)*1000+(n/10%10)*100+(n/10/10%10)*10+(n/10/10/10%10);
	}
	else if(n>=100){
		reverse=(n%10)*100+(n/10%10)*10+(n/10/10);
	}
	else if(n>=10){
		reverse=(n%10)*10+(n/10%10);
	}
	else{
		reverse=n;
	}

	return reverse;
}
int reverseDigitsVer2(int n)
{
	int i,temp,reverse=0,a,pow=1;
	if(n>1000){
		a=1000;
		for(i=1;i<=4;i++){
			temp=n/pow%10;
			pow*=10;
			reverse+=temp*a;
			a/=10;
		}
	}
	else if(n>100){
		a=100;
		for(i=1;i<=3;i++){
			temp=n/pow%10;
			pow*=10;
			reverse+=temp*a;
			a/=10;
		}
	}
	else if(n>10){
		a=10;
		for(i=1;i<=2;i++){
			temp=n/pow%10;
			pow*=10;
			reverse+=temp*a;
			a/=10;
		}
	}
	else{
		reverse=n;
	}
	return reverse;
}
