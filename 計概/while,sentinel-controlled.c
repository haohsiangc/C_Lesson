#include <stdio.h> 
int main(void)
{
	unsigned int counter;//unsigned int«D­t¾ã¼Æ 
	int grade;
	int total;
	int fail;
	float avg;
	
	total=0;
	counter=0;
	fail=0;
	
	printf("Enter grade,-1 to end ");
	scanf("%d",&grade);
	
	while(grade!=-1){
		total=total+grade;
		counter=counter+1;
		
		printf("Enter grade,-1 to end ");
		scanf("%d",&grade);
		
		if(grade<60&&grade>=0){
			fail++;
		}
	}
	if(counter!=0){
		avg=(float)total/counter;
		printf("total = %d, avg is %.2f\n",total, avg);
	}
	else
		printf("No grades were entered!");
	
	printf("fail=%d",fail);
}
