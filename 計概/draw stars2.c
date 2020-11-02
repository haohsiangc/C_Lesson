#include <stdio.h>
int main()
{
	int i,j;
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		printf("\n");
		for(j=1;j<=i;j++){
			printf("*");
		}
	}
}

