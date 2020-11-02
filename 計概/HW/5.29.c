#include <stdio.h>
int lcm(int i,int j);
int main()
{
	int num1,num2;
	printf("Enter 1st integer:");
	scanf("%d",&num1);
	printf("Enter 2nd integer:");
	scanf("%d",&num2);
	printf("The lowest commom Multiple:%d",lcm(num1,num2));
}
int lcm(int i,int j)
{
	int larger,temp;
	if(i>j){
		larger=i;
	}
	if(j>i){
		larger=j;
	}
	for(temp=larger;temp>=larger;temp++){
		if(temp%i==0&&temp%j==0){
			break;
		}
	}
	return temp;
}
