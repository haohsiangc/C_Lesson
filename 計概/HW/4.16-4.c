#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){
    	for(j=1;j<=line;j++){
        	if(j>=i){//第i行有i顆星星 
            	printf("*");
        	}
        	else{
            	printf(" ");//第i行有i-1個空格 
        	}
    	}
		printf("\n");
	}
}
