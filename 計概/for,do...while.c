#include <stdio.h>

int main(void)
{
	int i,sum=0;
	for(i=0;i<10;i++){
		sum++;
	}
	printf("%d\n",sum);
	//�i�H�g���U���o�� 
	i=0;
	sum=0;
	while(i<10){
		sum++;
		i++;
	}
	printf("%d\n",sum);
	//�]�i�H�g���U���o��
	i=0;
	sum=0; 
	do{
		i++;
		sum++;
	}while(i<10);
	printf("%d\n",sum);
}

