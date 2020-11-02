#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//有幾行 
		for(j=line;j>=i;j--){//第i行有line顆星星 
			printf("*");
		}
		printf("\n");
	}
}
