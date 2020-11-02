#include <stdio.h> 
int main(void)
{
	int a,b,c;
	printf("please input three integers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(a*a+b*b==c*c&&a+b>c||c*c+b*b==a*a&&b+c>a||a*a+c*c==b*b&&a+c>b){
		printf("%d,%d and %d form a right triangle",a,b,c);
	}
	else
		printf("%d,%d and %d don't form a right triangle",a,b,c);
	
	return(0);
}

