#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){
    	for(j=1;j<=line;j++){
        	if(j>=i){//��i�榳i���P�P 
            	printf("*");
        	}
        	else{
            	printf(" ");//��i�榳i-1�ӪŮ� 
        	}
    	}
		printf("\n");
	}
}
