#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int answer(int x,int y)
{
	int answer;
	
	answer=x*y;
	return answer;
}
int main()
{
	srand(time(NULL));
	int input;
	int a,b;
	while(1){
		a=rand()%10;
		b=rand()%10;
		
		printf("How much is %d times %d?\n",a,b);
		printf("Enter your answer : ");
		scanf("%d",&input);
	
		while(input!=answer(a,b)){
			printf("No.Please try again\n");
			printf("Enter your answer : ");
			scanf("%d",&input);
		}
		if(input==answer(a,b)){
			printf("Very good!\n");
		}
	}
}

