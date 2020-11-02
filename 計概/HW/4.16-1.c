#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//有幾行 
		for(j=1;j<=i;j++){
			printf("*");//第i行有i顆星星 
		}
		printf("\n");
	}
}
