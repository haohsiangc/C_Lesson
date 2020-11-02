#include <stdio.h>
int main()
{
	int i,j;
	int line;
	
	printf("Enter a number:");
	scanf("%d",&line);
	
	for(i=1;i<=line;i++){//有幾行 
		for(j=line;j>=1;j--){
			if(j>i){ //第i行有line-i個空格 
				printf(" ");
			}
			else{
				printf("*");//第i行有i顆星星
			}
		}
		printf("\n");
	}
}
