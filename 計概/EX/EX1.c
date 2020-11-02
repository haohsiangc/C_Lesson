#include <stdio.h>

int main(void)
{
	int a,b,c;
	
	printf("Enter the first number\n");
	printf("a=");
	scanf("%d",&a);
	
	printf("enter the second number\n");
	printf("b=");
	scanf("%d",&b);
	
	printf("1.add\n2.subtract\n3.multiply\n4.divide\nchoose a number to calculate a&b\n");
	
	printf("chooose=");
	scanf("%d",&c);
	if(c==1){
		printf("%d+%d=%d\n",a,b,a+b);
	}
	if(c==2){
		printf("%d-%d=%d\n",a,b,a-b);
	}
	if(c==3){
		printf("%d*%d=%d\n",a,b,a*b);
	}
	if(c==4){
		printf("%d/%d=%d\n",a,b,a/b);
	}
}
