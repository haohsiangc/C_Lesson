#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//���X�� 
		for(j=line;j>=1;j--){
			if(j>i){ //��i�榳line-i�ӪŮ� 
				printf(" ");
			}
			else{
				printf("*");//��i�榳i���P�P
			}
		}
		printf("\n");
	}
}
