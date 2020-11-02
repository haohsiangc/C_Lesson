#include <stdlib.h>
#include <stdio.h>
#define SIZE 10
void SelectionSort(int a[]);
int main()
{
	int b[SIZE];
	int input;
	printf("Please enter 10 integers:");
	for(size_t i=0;i<SIZE;i++){
		scanf("%d",&input);
		b[i]=input;
	}
	printf("The unsorted data:");
	for(size_t i=0;i<SIZE;i++){
		printf("%-4d",b[i]);
	}
	SelectionSort(b);	   
	printf("\nThe sorted data:");
	for(size_t i=0;i<SIZE;i++){
		printf("%-4d",b[i]);
	}
	system("pause");
	return 0;
} 
void SelectionSort(int a[])
{
	for(unsigned int pass=1;pass<=SIZE;pass++){
		for(size_t i=0;i<SIZE-1;i++){
			if(a[i]>a[pass-1]){
				int hold=a[i];
				a[i]=a[pass-1];
				a[pass-1]=hold;
			}
		}
	}
}
