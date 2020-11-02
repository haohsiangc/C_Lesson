#include <stdio.h>
int main()
{
	int times,counter;
	int integer=0;
	int sum=0;
	float avg=0;
	
	printf("How much time do you want to calculate?\n");
	scanf("%d",&times);
	
	for(counter=1;counter<=times;counter++){
		printf("Enter a integer:");
		scanf("%d",&integer);
		sum+=integer;
	}

	printf("sum=%d\n",sum);
	avg=(float)sum/times;
	printf("avg=%.2f",avg);
}
