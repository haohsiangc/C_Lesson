#include <stdlib.h>
#include <stdio.h> 
#include <time.h>
#define SIZE 100
void BubbleSort();
int main()
{
	srand(time(NULL));
	int a[SIZE];
	printf("Before:");
	for(time_t i=0;i<SIZE;i++){
		a[i]=1+rand()%1000;
		printf("%-5d",a[i]);
	}
	BubbleSort(a);
	printf("\nAfter:");
	for(time_t i=0;i<SIZE;i++){
		printf("%-5d",a[i]);
	}
}
void BubbleSort(int b[])
{
	for(unsigned int pass=1;pass<SIZE;pass++){
		for(size_t i=0;i<SIZE-pass;i++){
			if(b[i]>b[i+1]){
				int hold=b[i];
				b[i]=b[i+1];
				b[i+1]=hold;
			}
		}
	}
}
