#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//���X�� 
		for(j=1;j<=i;j++){
			printf("*");//��i�榳i���P�P 
		}
		printf("\n");
	}
}
