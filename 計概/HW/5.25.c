#include <stdio.h>
int maximum(int w,int x,int y,int z)
{
	int max;
	max=w;
	if(x>max){
		max=x;
	}
	if(y>max){
		max=y;
	}
	if(z>max){
		max=z;
	}
	return max;
}
int main()
{
	float num1,num2,num3,num4;
	printf("Enter four number and I will find the maximum\n");
	scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
	printf("the maximum is : %f",maximum(num1,num2,num3,num4));
}
