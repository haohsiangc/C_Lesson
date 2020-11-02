#include <stdlib.h>
#include <stdio.h>
#include "SumOfDigit.h"
#include "intTOstr.h"
int main(){
    int integer;
    
	printf("Enter an integer:");
	scanf("%d",&integer);
	
	printf("result:");
    intTOstr(integer);
    printf("=%d\n",SumOfDigit(integer));
    system("pause");
	return (0);
}