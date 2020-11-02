#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include<math.h>
int main()
{
	srand(time(NULL));//set rand()f
	int answer;
	int input;
	int left=1,right=100;
	int logic=1;
	char j;
	while(logic=1){
		answer=1+rand()%100;
		left=1;
		right=100;
		
		printf("Guess a number:");
		scanf("%d",&input);
		
		while(input!=answer){
			if(input>answer){
				right=input;
				printf("%d~%d",left,right);
			}
			if(input<answer){
				left=input;
				printf("%d~%d",left,right);
			}
			printf("\nGuess a number:");
			scanf("%d",&input);
		}
		if(input==answer){
			printf("You guessed the number!!\n");
			printf("Would you like to try again?\nY or N\n");
			fflush(stdin);
			scanf("%c",&j);
			if(j=='Y'||j=='y'){
				logic=1;
			}
			if(j=='n'||j=='N'){
				exit(0);
			}
		}
	}
}


