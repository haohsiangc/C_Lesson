#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//���X�� 
		for(j=line;j>=i;j--){//��i�榳line���P�P 
			printf("*");
		}
		printf("\n");
	}
}
