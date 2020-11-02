#include <stdio.h>

int main(void)
{
	int i;
	int j;
	i=1;
	j=1;
	scanf("%d",&i);
	while(j<=9){
		printf("%d*%d=%d\n",i,j,i*j);
		j++;
	}
	
}
