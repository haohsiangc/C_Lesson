#include <stdio.h>
int main(){
	int input,counter;
	printf("Please enter a integer:");
	scanf("%d",&input);
	for(int x=0;x<=input;x++){
		for(int y=0;y<=x;y++){
			if(x*x+y*y==input){
				printf("x=%d,y=%d. %d^2+%d^2=%d\n",y,x,y,x,input);
				counter++;
			}
		}
	}
	if(counter==0){
		printf("Not found");
	}
} 
