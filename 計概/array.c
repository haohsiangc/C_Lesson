#include <stdio.h>
#define SIZE 12
int main()
{
	int a[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
	int oddtotal=0;
	int eventotal=0;
	
	for(size_t i=0;i<SIZE;i++){
		if(i%2==0){
			oddtotal+=a[i];
		}
		else{
			eventotal+=a[i];
		}
	}
	printf("Total of array odd element value is %d\n",oddtotal);
	printf("Total of array even element value is %d",eventotal);
}
