#include <stdio.h>
int main()
{
	int counter;
	int num;
	int largest;
	int second;
	int lp;
	int sp;
	
	largest=0;
	second=0;

	for(counter=1;counter<=10;counter++){
		printf("Please enter the %dth number:",counter);
		scanf("%d",&num);
		if(num>largest){
			largest=second;//把原本second取代掉 
			sp=lp;
			largest=num;//把原本largest取代掉 
			lp=counter;
		}
		else{
			if(num>second){
				second=num;
				sp=counter;
			}
		}
	}
	printf("largest is %d, position at %d\n",largest,lp);
	printf("second is %d, position at %d\n",second,sp);
}
