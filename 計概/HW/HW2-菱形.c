#include <stdio.h>
int main()
{
	int n;
	int j,k,l;
	printf("Enter a number:");
	scanf("%d",&n);
	for(j=1;j<=(n+1)/2;j++){
		for(k=1;k<=n-j;k++){
			printf(" ");
		}
		for(k=1;k<=2*j-1;k++){
			printf("*");
		}
		printf("\n");
	}
	for(j=(n-1)/2;j>=1;j--){
		for(k=1;k<=n-j;k++){
			printf(" ");
		}
		for(k=1;k<=2*j-1;k++){
			printf("*");
		}
		printf("\n");
	}
	
}
