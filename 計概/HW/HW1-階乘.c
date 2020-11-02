#include <stdio.h>
int main()
{
	int i,j;
	int product=1;
	
	printf("Enter a positive number:");
	scanf("%d",&i);
	while(i<0){
		printf("Enter a positive number:");
		scanf("%d",&i);
	}
	j=i;	
	while(j>=1){
		product*=j;
		j--;
	}
	printf("%d!=%d",i,product);
}
