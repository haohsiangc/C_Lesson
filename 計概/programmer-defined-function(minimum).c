#include <stdio.h>
int minimum(int w,int x,int y,int z)
{
	int min=w;
	if(x<min){
		min=x;
	}
	if(y<min){
		min=y;
	}
	if(z<min){
		min=z;
	}
	return min;//�^��min���I�s���禡(�b�o�̬Oprintf) 
}
int main()
{
	int num1,num2,num3,num4;
	
	printf("Enter four number\n");
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	
	printf("minimum is %d",minimum(num1,num2,num3,num4));
	
}
