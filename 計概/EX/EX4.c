#include <stdio.h>

int main(void)
{
	float a,b,c;
	
	printf("\nenter a,b,c and i will print the sum,average,product,smallest and largest of a,b,c.\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	
	printf("sum=%.1f\naverage=%.2f\nproduct=%.1f\n",a+b+c,(a+b+c)/3,a*b*c);
	if(a<=b&&a<=c){
		printf("a is the smallest\n");
	} 
	if(b<=a&&b<=c){
		printf("b is the smallest\n");
	}
	if(c<=a&&c<=b){
		printf("c is the smallest\n");
	}
	if(a>=b&&a>=c){
		printf("a is the largest\n");
	}
	if(b>=a&&b>=c){
		printf("b is the largest\n");
	}
	if(c>=a&&c>=b){
		printf("c is the largest\n");
	}
}
