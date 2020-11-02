#include <stdio.h> 
int main(void)
{
	unsigned int counter;//unsigned int«D­t¾ã¼Æ 
	int grade;
	int total;
	float avg;
	int fail;
	
	total=0;
	counter=0;
	fail=0;
	while(counter<10){
		printf("Enter grade");
		scanf("%d",&grade);
		total=total+grade;
		counter=counter+1;
		if(grade<60){
			fail++;
		}
	}
	avg=(float)total/10;
	printf("avg is %.2f\n",avg);
	printf("fail=%d",fail);
}
